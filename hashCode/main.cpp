#include <bits/stdc++.h>


using namespace std;

int main(){
    freopen("e_shiny_selfies.txt","r",stdin);
    freopen("out4.txt","w",stdout);
  int noPhotos;
  char orientaion;
  int noTags;
  cin >> noPhotos;

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
  map<int,int>mp;
  vector <int>H,V;
  for(auto tag:tags){
    for(auto it:tagContainer[tag]){
            if(!mp[it.first]){
        if(it.second==0)V.push_back(it.first);
        else H.push_back(it.first);
        mp[it.first]++;
            }
    }
  }
cout<<V.size()/2+H.size()<<endl;

for(auto i:H){
    cout<<i<<endl;
}
int x=(V.size()/2)*2;
for(int i=0;i<x;i++){

    cout<<V[i];
    if(i&1)cout<<endl;
    else cout<<" ";
}
}
