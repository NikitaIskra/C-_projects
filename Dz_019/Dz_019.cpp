#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;

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


int main()
{
	int choice;
	cout << "File manager" << endl;
	showCurrentDirectory();
	cout << "1 - Display all subdirectories of the current directory" << endl;
	cout << "2 - Displaying all files in the current directory" << endl;
	cout << "3 - Creating a new directory in the current directory" << endl;
	cout << "4 - Deleting an existing directory" << endl;
	cout << "Your choice: ";
	cin >> choice;
	if (choice == 1) {
		listDirectories();
	}
	if (choice == 2) {
		listFiles();
	}
	if (choice == 3) {
	fs::path dir = "example_dir";
	fs::path nested = "a/b/c";
	if (fs::create_directories(nested)) {
	cout << "Nested directoryes created seccessfully\n";
	listDirectories();
}
else {
	cout << "Failed to create directoryes\n";
}
	}
	if (choice == 4) {
    fs::path dir = "example_dir";
	fs::path nested = "a/b/c";	
	fs::remove_all("a");
	cout << "Directory deleted." << endl;
	listDirectories();
	}
}

