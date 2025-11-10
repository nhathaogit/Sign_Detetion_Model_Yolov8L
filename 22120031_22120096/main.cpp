#include "lib.h"

cv::dnn::Net d_net;
cv::dnn::Net c_net;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // Không hiển thị log của opencv
    cv::utils::logging::setLogLevel(cv::utils::logging::LOG_LEVEL_SILENT);

    cout << "Dang tai mo hinh phat hien va phan loai";
    d_net = cv::dnn::readNetFromONNX(detector_path);
    c_net = cv::dnn::readNetFromONNX(classifier_path);

    if (d_net.empty() || c_net.empty()) {
        cout << "Khong tai duoc mo hinh" << endl;
        return false;
    }

    string selectedFile;
    vector<Sign> signs;

    while (true) {
        int choice = getMenuChoice();

        clearScreen();

        switch (choice) {
        case 0: {
            cout << "Dang mo File Explorer...\n";
            if (openFileDialog(selectedFile)) {
                if (isImageFile(selectedFile)) {
                    cout << "\n[THANH CONG] Duong dan anh da chon:\n";
                    cout << selectedFile << endl;
                    cout << "\nNhan phim bat ky de tiep tuc" << endl;
                    system("pause");
                    clearScreen();
                    signs.clear();
                    runModels(selectedFile, signs);
                }
                else {
                    cout << "\n[CANH BAO] File ban chon khong phai la dinh dang anh hop le!\n";
                    cout << "Vui long chon file voi dinh dang: .jpg, .jpeg, .png, .bmp, .gif, .tiff, .webp, .ico\n";
                    cout << "File da chon: " << selectedFile << endl;
                }
            }
            else {
                cout << "\n[HUY BO] Khong chon anh nao!\n";
            }

            cout << "\nNhan phim bat ky de tiep tuc...";
            int unused_key = _getch();
            break;
        }
        case 1:
            clearScreen();
            cout << "\nTam biet!\n";
            return 0;
        default:
            break;
        }
    }

    return 0;
}