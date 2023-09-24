#include <bits/stdc++.h>
using namespace std;
 
typedef struct
{
    int in, r, l;
} query;
 
long long int freq[1000006];
long long int ans;
long long int v[200005], an[200005];
int n, t, th;
 
void add(int p)
{
    ans -= (freq[v[p]] * freq[v[p]] * v[p]);
    freq[v[p]]++;
    ans += (freq[v[p]] * freq[v[p]] * v[p]);
}
 
void remove(int p)
{
    ans -= (freq[v[p]] * freq[v[p]] * v[p]);
    freq[v[p]]--;
    ans += (freq[v[p]] * freq[v[p]] * v[p]);
}
 
bool compare(query a, query b)
{
    return (a.l/th != b.l/th) ? (a.l/th < b.l/th) : ((a.r < b.r) ^ ((a.l/th) & 1));
}
 
 
int main()
{
    scanf("%d %d", &n, &t);
    th = 1000;
    
    for (int i = 0; i < n; i++) scanf("%lld", &v[i]);
    
    query que[200005];
    for (int i = 0; i < t; i++) scanf("%d %d", &que[i].l, &que[i].r), que[i].in = i;
    sort(que, que + t, compare);
    
    int curl = 0, curr = 0;
    ans = v[0];
    freq[v[0]] = 1;
    for (int i = 0; i < t; i++)
    {
        int l = que[i].l - 1, r = que[i].r - 1;
        while (curr < r) add(++curr);
        while (curl > l) add(--curl);
        while (curl < l) remove(curl++);
        while (curr > r) remove(curr--);
        an[que[i].in] = ans;
    }
    for (int i = 0; i < t; i++) printf("%lld\n", an[i]);
    return 0;
}
