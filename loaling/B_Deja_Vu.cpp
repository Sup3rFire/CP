#include <bits/stdc++.h>
using namespace std;

// loal is a cute girl

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

void IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji() {
  int n, q;
  cin >> n >> q;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<int> qv[31];
  memset(qv, 0, sizeof(qv));
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    qv[x].pb(i);
  }

  for (int i = 0; i < n; i++) {
    int allowed = 0;
    int largest = __lg(a[i] & -a[i]);
    for (int j = largest; j >= 1; j--) {
      auto find = lower_bound(all(qv[j]), allowed);
      if (find != qv[j].end()) {
        allowed = *find;
        a[i] += (1 << j-1);
        cout << j << a[i] << endl;
      }
    }
  }
  // for (auto i : a) cout << i << " ";
  // cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  cin >> IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  for (int IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji = 0; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji < IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji++) IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji();
  
  return 0;
}