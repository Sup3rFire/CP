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

void IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);
  int pl = 0, pr = 2;
  ll cnt = 0;
  while (pl+2 < n) {
    while (pr < n && a[pr]-a[pl] <= 2) {
      pr++;
    }
    pr--;
    if (pr-pl < 2) {
      pl++;
      continue;
    }
    cnt += (ll)(pr-pl)*(pr-pl-1)/2;
    pl++;
  }
  cout << cnt << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  cin >> IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  for (int IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji = 0; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji < IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji++) IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji();
  
  return 0;
}