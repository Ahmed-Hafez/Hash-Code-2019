#include <bits/stdc++.h>
#define el '\n'
#define fornp(i, x, n) for (int i = x; i < int(n); i++)
#define fornm(i, x, n) for (int i = x; i >= int(n); i--)
#define rep(i,n) for (int i = 0; i < int(n); i++)
#define MAXN (int)1e7+10
#define vi vector<int>
#define vll vector<ll>
#define MOD (int)((1e9)+7)
#define oo (int)(2e9)
#define OO (ll)(1e18)
#define clr(container, val) memset(container, val, sizeof(container))
#define sz(container) container.size()
typedef long long ll;

using namespace std;
class photo
{
public:
    int state;
    int noTags;
    vector<string> tags;

};
int main()
{

    int noPhotos;
    cin >> noPhotos;
    photo f[noPhotos];
    map<vector<photo>> tags;
    set<string> tagsName;
    for(int i = 0; i < noPhotos; i++)
    {
        char c;
        cin>>c>>f[i].noTags;
        f[i].state=(c=='H')?1:0;
        for(int j=0; j<f[i].noTags; j++)
        {
            string tag;
            cin>>tag;
            f[i].tags.push_back(tag);
            tags[tag] = tags[tag].push_back(j);
            tagsName.insert(tag);
        }

        for(auto tag : tagsName){
           sort(tags[tag].state);
        }


    }

    return 0;
}
