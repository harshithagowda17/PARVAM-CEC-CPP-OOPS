#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // we have defined the write object from the ofstream class
    ofstream write("a.txt"); // opening the file & writing in the file using write object
    write << " Good Morning Students, " << endl;
    write << " We shall work on File Handling! " << endl;
    write.close();  // closing the file after writing
    ofstream fout("b.txt");
    fout << " Written in the file using another user-defined object : fout";
    fout.close();
    // we can use any word to make an object, Ex: write, fout, file, file1, file2, etc.
    ofstream out("a.txt");
    out.put('G');  // Adding single character in the file using put method
    out << "ood Morning!";
    out.close();
}