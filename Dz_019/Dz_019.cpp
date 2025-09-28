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

void create_temp_file(const string& filename) {
	fs::path file_path = filename;
	ofstream(file_path) << "file for test!!!!";
	cout << "Temporary file created at: " << file_path << endl;;
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
	cout << "5 - Creating a new file in the current directory" << endl;
	cout << "6 - Deleting a file from the current directory;" << endl;
	cout << "7 - Renaming a file in the current directory;" << endl;
	cout << "8 - Move a file from the current directory to a user-specified directory" << endl;
	cout << "9 - Print the contents of a user-specified file from the current directory to the screen" << endl;
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
	if (choice == 5) {
    fs::path temp_dir = fs::temp_directory_path() / "my_temp_directory";
	fs::create_directory(temp_dir);
	fs::path file_path = temp_dir / "temp_file.txt";
	create_temp_file(file_path.string());
	for (const auto& entry : fs::directory_iterator(temp_dir)) {
	cout << entry.path() << endl;
}

	}
	if (choice == 6) {
		string filename;
		cout << "Enter the name of the file to delete: ";
		cin >> filename;

		fs::path file_path = fs::current_path() / filename;

		if (fs::exists(file_path)) {
			fs::remove(file_path);
			cout << "File deleted." << endl;
		}
		else {
			cout << "No such file: " << filename << endl;
		}

		listFiles();
	}
	if (choice == 7) {
		string oldname;
		cout << "Enter the name of the file to rename: ";
		cin >> oldname;
		string newname;
		cout << "Enter new name: ";
		cin >> newname;
		
		fs::rename(oldname, newname);

		listFiles();
		listDirectories();
	}
	if (choice == 8) {
		string olddir;
		cout << "Enter the directory from which you want to move the file: ";
		cin >> olddir;
		string newdir;
		cout << "Enter new directory: ";
		cin >> newdir;
		fs::rename(olddir, newdir);
		cout << "File moved to - " << newdir << endl;
	}
	if (choice == 9) {
		string file;
		cout << "Enter a name file: ";
		cin >> file;
	}
}

