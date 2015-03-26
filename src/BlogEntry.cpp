#include <iostream>
#include <stdlib.h>
#include "BlogEntry.h"
#include "Date.h"
#include "Text.h"

using namespace std;


BlogEntry::BlogEntry(){
return;
}


BlogEntry::BlogEntry(const Text& initAuthor, const Text& initContents) {
   // initAuthor = "";
   // initContents = "";
}

Text BlogEntry::getAuthor(ostream& out, istream& input) const {
    cout << "Enter your name";

return author;
}

Text BlogEntry::getContents() const {

return contents;
}

Date BlogEntry::getCreateDate() const {
return created;
}

Date BlogEntry::getModifyDate() const {
return modified;
}

void BlogEntry::setAuthor(const Text& newAuthor){

    author = newAuthor;
return;
}

void BlogEntry::setContents(const Text& newContents){
    contents = newContents;
return;
}



void BlogEntry::showStructure() const {
    cout << "Author: " << endl;
    cout << "Created: " << endl;
    cout << "Modified: " << endl;
    cout << "Content: " << endl;
}



void BlogEntry::printHTML(ostream& out) const {

    cout << "<html>" << endl;
    cout << "<body>" << endl;
    cout << author << endl;
    cout << "<p>" << endl;
    cout << contents << endl;
    cout << "</p>" << endl;
    cout << "<p>" << endl;
    cout << "Created: " << created << endl;
    cout << "</p>" << endl;
    cout << "<p>" << endl;
    cout << "Last modified: " << modified << endl;
    cout << "</p>" << endl;
    cout << "</body>" << endl;
    cout << "</html>" << endl;
return;
}
