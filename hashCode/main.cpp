#include <bits/stdc++.h>


using namespace std;

int main(){
  int noPhotos;
  char orientaion;
  int noTags;
  cin >> noPhotos;
  photo f[noPhotos];
  map<string, vector<pair<int,bool>> > tagContainer;
  set <string> tags;
  vector<int> v,h;
  for(int i=0;i<noPhotos;++i){
    cin>>orientaion;
    cin>>noTags;
    while(noTags--){
      string tag;
      cin>>tag;
      tags.insert(tag);
      tagContainer[tag].push_back({i,(orientaion=='H'?1:0)});
      if(orientaion=='H'){
        h.push_back(i);
      }else{
        v.push_back(i);
      }
    }
  }
  for(int j=0;j<tags.size();++j){
    
  }

}
