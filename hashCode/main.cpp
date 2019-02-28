#include <bits/stdc++.h>


using namespace std;

int main()
{

    /*
        "b_lovely_landscapes.txt",
        "c_memorable_moments.txt",
        "d_pet_pictures.txt",
        "e_shiny_selfies.txt"
        */
    freopen("b_lovely_landscapes.txt","r",stdin);
    freopen("out0.txt","w",stdout);

    int noPhotos;
    char orientaion;
    int noTags;
    cin >> noPhotos;

    map<string, vector<pair<int,bool>> > tagContainer;
    set <string> tags;
    vector<int> v,h;
    for(int i=0; i<noPhotos; ++i)
    {
        cin>>orientaion;
        cin>>noTags;
        while(noTags--)
        {
            string tag;
            cin>>tag;
            tags.insert(tag);
            tagContainer[tag].push_back({i,(orientaion=='H'?1:0)});
            if(orientaion=='H')
            {
                h.push_back(i);
            }
            else
            {
                v.push_back(i);
            }
        }
    }
    map<int,int>mp;
    vector <int>H,V;
    for(auto tag:tags)
    {
        for(auto it:tagContainer[tag])
        {
            if(!mp[it.first])
            {
                if(it.second==0)V.push_back(it.first);
                else H.push_back(it.first);
                mp[it.first]++;
            }
        }
    }
    cout<<V.size()/2+H.size()<<endl;
    int j=0;
    int x=(V.size()/2)*2;

    for(int i=0; i<H.size(); i++)
    {

       if(i%2==0) cout<<H[i]<<endl;

        for(; j<x; j++)
        {

            cout<<V[j];
            if(j&1){cout<<endl;
            j++;break;
            }
            else cout<<" ";

        }

    }
}
