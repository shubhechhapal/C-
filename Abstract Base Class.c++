#include<iostream>
#include<cstring>
using namespace std;
class CWH
{
protected:
string title;
float rating;
public:
CWH(string s, float r){
title=s;
rating=r;
}
virtual void display()=0;
};
class CWHvideo:public CWH
{
float videolength;
public:
CWHvideo(string s, float r,float vL):CWH(s,r){
videolength=vL;
}
void display(){
cout<<"This is anamazing video with title "<<title<<endl;
cout<<"Ratings: "<<rating<<"out of 5 stars"<<endl;
cout<<"Length of this video is: "<<videolength<<"minutes"<<endl;
}
};
class CWHText:public CWH
{
int words;
public:
CWHText(string s,float r, int wc):CWH(s,r){
words=wc;
}
void display(){
cout<<"This is an amazing text tutorial with title"<<title<<endl;
cout<<"Ratings of this text tutrial: "<<rating<<"out of 5 stars"<<endl;
cout<<"No of words in this text tutorial is: "<<words<<"words"<<endl;
}
};
int main(){
string rating,vlen;
int words;
title="Django tutorial";
vlen=4.56;
rating=4.89;
CWHvideo djvideo(title, rating, vlen);
title="Django tutorial text";
words=433;
rating=4.19;
CWHtext djtext(title,rating,words);
CWH*tuts[2];
tuts[0]=&djvideo;
tuts[1]=&djText;
tuts[0]->display();
tuts[1]->display();
return 0;
}
