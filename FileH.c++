#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void createFile(){
    
    ofstream outFile("file1.txt");
    
    if(outFile.is_open()){
        cout<<"File created Successfully";
        outFile<<"This is first line.\n";
        outFile<<"This is second line.\n";
        outFile.close();
    }
    else{
        cout<<"Unable to open file";
    }
    
}

void readFile(){
    ifstream inFile("file1.txt");
    string line;
    if(inFile.is_open()){
        cout<<"File Opened Successfully"<<endl;
        while(getline(inFile,line)){
            cout<<line<<endl;
        }
        inFile.close();
    }
    else{
        cout<<"File Open Failed"<<endl;
    }
}

void updateFile(){
    // readFile
    ifstream inFile("file1.txt");
    vector<string> lines;
    string line;
    if(inFile.is_open()){
        cout<<"File Opened Successfully"<<endl;
        while(getline(inFile,line)){
            lines.push_back(line);
        }
        inFile.close();
    }
    else{
        cout<<"File Open Failed"<<endl;
    }
    
    
    lines.push_back("This is the new line \n");
    
    // write the updated contents means the vector to the existing file
    ofstream outFile("file1.txt");
    if(outFile.is_open()){
        for(int i = 0; i<lines.size(); ++i){
            outFile<<lines[i]<<"\n";
        }
        outFile.close();
        cout<<"File Updated Successfully."<<endl;
    }
    else{
        cout<<"Unable to open file";
    }
}

int main()
{
    cout<<"Hello World"<<endl;
    createFile();
    readFile();
    updateFile();
    return 0;
}