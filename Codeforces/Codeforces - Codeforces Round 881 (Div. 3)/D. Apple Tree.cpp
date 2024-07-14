#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

// loal is the cutest girl

#define ll long long
#define ld long double
#define pow2(x) (x)*(x)
#define le left
#define ri right
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int maxn = 2e5+5;
int ans[maxn];
void dfs(vector<vector<int>> &adj, int now, int prev = -1) {
  ans[now] = 0;
  bool leaf = true;
  for (auto i : adj[now]) {
    if (i == prev) continue;
    leaf = false;
    dfs(adj, i, now);
    ans[now] += ans[i];
  }
  ans[now] += leaf;
}

void IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji() {
  int n;
  cin >> n;
  vector<vector<int>> adj(n, vector<int>());
  for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  dfs(adj, 0);
  int q;
  cin >> q;
  for (;q--;) {
    int x, y; cin >> x >> y; x--; y--;
    cout << (ll)ans[x]*ans[y] << '\n';
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  cin >> IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  for (int IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji = 0; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji < IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji++) IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji();
  
  return 0;
}