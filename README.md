# Dự án Phát hiện Biển báo (Sign Detection)

Dự án C++ trong Visual Studio sử dụng OpenCV và ONNX để phát hiện và phân loại biển báo giao thông.

## 🚀 Yêu cầu hệ thống

1.  **Visual Studio 2019** (hoặc mới hơn).
    * Khi cài đặt, đảm bảo chọn workload **"Desktop development with C++"**.
2.  **Git** (để clone dự án).

## 🛠️ Hướng dẫn Build

Dự án này sử dụng **NuGet Package Restore** để tự động cài đặt tất cả các thư viện cần thiết.

1.  Clone dự án về máy của bạn:
    ```bash
    git clone <URL-repository-cua-ban>
    cd <ten-thu-muc-du-an>
    ```

2.  Mở tệp `.sln` (ví dụ: `Sign-Detection.sln`) bằng Visual Studio.

3.  Chọn cấu hình build (ví dụ: **`x64`** và **`Debug`** hoặc **`Release`**).

4.  Nhấn **Build Solution** (Phím tắt: `Ctrl+Shift+B` hoặc `F7`).

**Tự động:** Khi bạn Build, Visual Studio sẽ tự động phát hiện các gói NuGet bị thiếu và tải chúng về trước khi biên dịch. Bạn không cần làm gì thêm.

**Lưu ý:** Lần build đầu tiên có thể mất vài phút để tải các thư viện về.