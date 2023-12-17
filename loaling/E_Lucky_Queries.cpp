#include <iostream>
using namespace std;

const int MAX = 1e6 + 5;
// const int MAX = 5;

int n;
string s;
struct Stree{
    int one,zero,maxnorm,maxinverse;
}tree[MAX*4];

bool lazy[MAX*4];

#define lc id*2
#define rc id*2+1

Stree merge(Stree le, Stree ri){
    Stree ret;
    ret.zero = le.zero+ri.zero;
    ret.one = le.one+ri.one;
    ret.maxnorm = max(max(le.zero+ri.maxnorm, le.maxnorm+ri.one), max(ret.zero, ret.one));
    ret.maxinverse = max(max(le.one+ri.maxinverse, le.maxinverse+ri.zero), max(ret.zero, ret.one));
    return ret;
}

void updateNode(int pos) {
    int temp = tree[pos].zero;
    tree[pos].zero = tree[pos].one;
    tree[pos].one = temp;
    temp = tree[pos].maxinverse;
    tree[pos].maxinverse = tree[pos].maxnorm;
    tree[pos].maxnorm = temp;
    lazy[pos] = !lazy[pos];
}

void build(int id,int le,int ri){
    if(le==ri){
        tree[id].zero = s[le-1] == '4';
        tree[id].one = s[le-1] == '7';
        tree[id].maxnorm = tree[id].maxinverse = 1;
        return;
    }
    int mid = (le+ri)/2;
    build(lc,le,mid), build(rc,mid+1,ri);
    tree[id] = merge(tree[lc], tree[rc]);
    return;
}

void checkLazy(int id, int le, int ri) {
    if (lazy[id]) {
        int mid = (le+ri)/2;
        updateNode(lc);
        updateNode(rc);
        lazy[id] = !lazy[id];
    }
}
void upd(int id,int le,int ri, int ql, int qr){
    if(le==ri){
        int temp = tree[id].zero;
        tree[id].zero = tree[id].one;
        tree[id].one = temp;
        temp = tree[id].maxinverse;
        tree[id].maxinverse = tree[id].maxnorm;
        tree[id].maxnorm = temp;
        return;
    }
    
    if (ql <= le && ri <= qr) {
        updateNode(id);
        return;
    }

    checkLazy(id, le, ri);
    int mid = (le+ri)/2;
    if(ql<=mid){
        upd(lc,le,mid,ql, qr);
    }
    if (qr > mid) {
        upd(rc,mid+1,ri,ql,qr);
    }
    tree[id] = merge(tree[lc], tree[rc]);
    return;
}

Stree que(){
    return tree[1];
}

// int q,op,pos,val,l,r;

int main() {
    ios_base::sync_with_stdio(false);
    cin>>n;
    int q;
    cin >> q;
    cin >> s;

    build(1,1,n);
    
    while(q--){
        string type;
        cin>>type;
        if(type=="switch"){
            int l, r;
            cin>>l>>r;
            upd(1,1,n, l, r);
        }
        else {
            cout<<que().maxnorm<<endl;
        }
    }
    return 0;
}