#include <bits/stdc++.h>
using namespace std;

// loal is a cute girl

#define int ll
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
#define pll pair<long, long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int MAXN = 4e5;
int n, mcv;
int BIT[MAXN+5];

// update nilai a[id] sebanyak +v
void update(int idx, int v) {
  for(int i = idx; i <= mcv; i += i & -i) BIT[i] += v;
}

// query sum [1..idx]
int get(int idx) {
  int sum = 0;
  for(int i = idx; i; i -= i & -i) sum += BIT[i];
  return sum;
}

void IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji() {
  memset(BIT, 0, sizeof(BIT));
  cin >> n;
  pii a[n];
  vector<int> vals;
  ll greetings = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i].se >> a[i].fi;
    vals.pb(a[i].se);
    vals.pb(a[i].fi);
  }
  sort(all(vals));
  map<int, int> compressed;
  for (int i = 0; i < vals.size(); i++) {
    compressed[vals[i]] = i+1;
    mcv = i+1;
  }
  for (int i = 0; i < n; i++) {
    a[i].fi = compressed[a[i].fi];
    a[i].se = compressed[a[i].se];
  }
  sort(a, a+n);
  for (int i = 0; i < n; i++) {
    greetings += get(a[i].fi)-get(a[i].se);
    update(a[i].se, 1);
  }
  cout << greetings << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  cin >> IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  for (int IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji = 0; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji < IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji++) IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji();
  
  return 0;
}