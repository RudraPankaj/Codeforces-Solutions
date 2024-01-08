#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    int nn, len;
    cin >> nn;
    string line;
    cin >> line;
    len = line.length();
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

    for (int xx=0; xx<len; xx++){
        line[xx] = tolower(line[xx]);
    }

    for(int ii=0; ii<len; ii++){
             if(a!=1 && line[ii]=='a')    a++;
        else if(b!=1 && line[ii]=='b')    b++;
        else if(c!=1 && line[ii]=='c')    c++;
        else if(d!=1 && line[ii]=='d')    d++;
        else if(e!=1 && line[ii]=='e')    e++;
        else if(f!=1 && line[ii]=='f')    f++;
        else if(g!=1 && line[ii]=='g')    g++;
        else if(h!=1 && line[ii]=='h')    h++;
        else if(i!=1 && line[ii]=='i')    i++;
        else if(j!=1 && line[ii]=='j')    j++;
        else if(k!=1 && line[ii]=='k')    k++;
        else if(l!=1 && line[ii]=='l')    l++;
        else if(m!=1 && line[ii]=='m')    m++;
        else if(n!=1 && line[ii]=='n')    n++;
        else if(o!=1 && line[ii]=='o')    o++;
        else if(p!=1 && line[ii]=='p')    p++;
        else if(q!=1 && line[ii]=='q')    q++;
        else if(r!=1 && line[ii]=='r')    r++;
        else if(s!=1 && line[ii]=='s')    s++;
        else if(t!=1 && line[ii]=='t')    t++;
        else if(u!=1 && line[ii]=='u')    u++;
        else if(v!=1 && line[ii]=='v')    v++;
        else if(w!=1 && line[ii]=='w')    w++;
        else if(x!=1 && line[ii]=='x')    x++;
        else if(y!=1 && line[ii]=='y')    y++;
        else if(z!=1 && line[ii]=='z')    z++;
    }



    if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z == 26){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }

    return 0;
}
