#include <iostream>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

void Files_Size_Calculator(string input , map<string,int>&m);
void extensions_specifier(map<string,int>&m);
void printOutput(map<string,int>&m);

int main()
{
	//freopen ("C:\\makefile\\myfile.txt","r",stdin);
	
	int TC, i , j;
	map <string ,int > m ;
	string line;
	getline(cin, line);
	
	stringstream ss;
	ss.str(line);
	ss >> TC;
	vector<int> lines_no(TC);
	
	while(ss >> lines_no[i])
	{
		for (j = 0 ; j < lines_no[i] ; j++)
		{
			getline(cin, line);
			Files_Size_Calculator(line,m);
		}


		extensions_specifier(m);
		
        printOutput(m);
        
        m.clear();
        
        i++;
	}
}



void Files_Size_Calculator(string input , map<string,int>&m)
{
	int i = 0 , int_size;
	stringstream ss(input);
	string line , extension ,string_size;

	getline(ss,line);

	size_t index = line.rfind(".");

	line = line.substr(index + 1);


	while (line[i] != ' ')
	{
		extension += line[i];
		i++;
	}
	
	while(line[i] != 'b' && i < line.size())
	{
        string_size += line[i];
        i++;
    }
    
	int_size = stoi(string_size);
    m[extension] += int_size ;

}

void extensions_specifier(map<string,int>&m)
{
	for(auto it = m.begin(); it != m.end() ; it++ ){
            string ext = it->first;
            if(ext == "mp3"|| ext == "aac" || ext == "flac" ){
                m["music"] += m[ext];
            }
            else if(ext == "jpg"|| ext == "bmp" || ext == "gif" ){
                m["images"] += m[ext];
            }
            else if (ext == "mp4"|| ext == "mkv" || ext == "avi" ){
                m["movies"] += m[ext];
            }
            else if(ext !="music" && ext !="images" && ext !="movies" && ext !="other"){
                m["other"] += m[ext];
            }
        }
}

void printOutput(map<string,int>&m)
{
    cout<<"music "<< m["music"] << "b "<< "images " << m["images"]<<"b "<<"movies "<<m["movies"]<< "b "<<"other "<<m["other"]<<"b"<<endl;
}