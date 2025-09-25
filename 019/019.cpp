#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;

void ls() {
	for (const auto& entry : fs::recursive_directory_iterator(".")) {
		cout << entry.path() << endl;
	}
}

void showCurrentDirectory() {
	cout << "Current directory: " << fs::current_path() << endl;
}

void listDirectories() {
	cout << "List of subdirectories: " << endl;
	for (const auto& entry : fs::directory_iterator(fs::current_path())) {
		if (entry.is_directory()) {
			cout << "  - " << entry.path().filename() << endl;
		}
	}
}

void listFiles() {
	cout << "List of Files: " << endl;
	for (const auto& entry : fs::directory_iterator(fs::current_path())) {
		if (entry.is_regular_file()) {
			cout << "  - " << entry.path().filename() << endl;
		}

	}

}


void changeDirectory(const string& path) {
	fs::current_path(path);
	cout << "Transfer to " << fs::current_path() << endl;
}

void create_temp_file(const string& filename) {
	fs::path file_path = filename;
	ofstream(file_path) << "file for test!!!!";
	cout << "Temporary file created at: " << file_path << endl;;
}


int main()
{
	//fs::path dir = "C:\\Users\\Нікіта\\Desktop\\019";
	//fs::path src = "sourse_file.txt";
	//fs::path dest = "dest_file1.txt";
	//fs::path dest1 = dir/"dest_file2.txt";
	//fs::path base_path = dir / "dest_file2.txt";

	//fs::path absolute_path = fs::absolute(dest);
	//cout << "---------------------------" << endl;
	//cout << fs::relative(absolute_path, base_path) << endl;
	//cout << base_path << endl;

	fs::path p = "/";
	auto space_info = fs::space(p);
	cout << space_info.free << " bytes" << endl;
	cout << space_info.capacity << " bytes" << endl;
	cout << space_info.available << " bytes" << endl;
	//string input;
	//showCurrentDirectory();
	//cout << "--------------------" << endl;
	//listDirectories();
	//cout << "--------------------" << endl;
	//listFiles();
	//cout << "Input path: ";
	//getline(cin, input);
	//fs::path p = input;
	//if (fs::exists(p)) {
	//	cout << "File exists" << endl;
	//}
	//else {
	//	cout << "File does not exists" << endl;
	//}
	//changeDirectory(input);
	//listFiles();

	//fs::path temp_dir = fs::temp_directory_path() / "my_temp_directory";
	//fs::create_directory(temp_dir);
	//create_temp_file(temp_dir, "temp_file.txt");
	//for (const auto& entry : fs::directory_iterator(temp_dir)) {
	//	cout << entry.path() << endl;
	//}


	///*fs::path dir = "example_dir";*/
	//fs::path nested = "a/b/c";
	//if (fs::create_directories(nested)) {
	//	cout << "Nested directoryes created seccessfully\n";
	//}
	//else {
	//	cout << "Failed to create directoryes\n";
	//}

 //    fs::path dir = "example_dir";
	////fs::path nested = "a/b/c";	
	// fs::remove(dir);

 //   fs::path dir = "test";	
	//fs::path nested = dir/"dir1/dir2/dir3";	
	//fs::path more = dir / "dir2.1/dir2.2/dir3.3";
	//if (fs::create_directories(nested) && fs::create_directories(more)) {
	//	cout << "Success" << endl;
	//}
	//else {
	//	cout << "Failed" << endl;
	//}
	//ls();
	//const auto isDelete = fs::remove_all(dir);
	//cout << format("remove {} items", isDelete);
	//ls();

	//ls();

}

