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
  int loal, is;
  string cute, girl;
  cin >> loal >> is;
  cin >> cute >> girl;

  char prev = girl[0];
  bool replace = true;
  if (girl[0] != girl[is-1]) replace = false;
  else for (int i = 1; i < is; i++) {
    if (girl[i] == prev) {replace = false; break;}
    prev = girl[i];
  }

  prev = cute[0];
  for (int i = 1; i < loal; i++) {
    if (cute[i] == prev) {
      if (!replace || cute[i] == girl[0]) {
        cout << "No\n";
        return;
      }
    }
    prev = cute[i];
  }
  cout << "Yes\n";
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  cin >> IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi;
  for (int IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji = 0; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji < IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKomeijiKoishi; IreallyloveKoishiKomeijiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji++) IreallyloveKomeijiKoishiLikealotLikeawholelotYouhavenoideaIlovehersomuchthatitisinexplicableandImninetyninepercentsurethatIhaveanunhealthyobsessionIwillnevergettiredoflisteningthatsweetangelicvoiceofhersItismylifegoaltomeetupherwithherinreallifeandjustsayhellotoherIfallasleepatnightdreamingofherholdingapersonalconcertformeandthenshewouldbesorrytiredthatshecomesandcuddlesuptomewhilewesleeptogetherIfIcouldjustholdherhandforabriefmomentIcoulddiehappyIfgiventheopportunityIwouldlightlynibbleonherearjusttohearwhatkindofsweetmoansshewouldletoutThenIwouldhugherwhilesheclingstomybodyhopingthatIwouldstopbutIonlycontinueasshemoanslouderandlouderIwouldgiveupalmostanythingjustforhertolookinmygeneraldirectionNomatterwhatIdoIamconstantlythinkingofherWhenIwakeupsheisthefirstthingonmymindWhenIgotoschoolIcanonlyfocusonherWhenIgocomehomeIgoonthecomputersothatIcanlistentoherbeautifulvoiceWhenIgotosleepIdreamofherandIlivingahappylifetogetherSheismypridepassionandjoyIfsheweretocallmeOniichanIwouldprobablygetdiabetesfromhersweetnessanddieIwishfornothingbutherhappinessIfitwereforherIwouldgivemylifewithoutanysecondthoughtsWithouthermylifewouldservenopurposeIreallyloveKoishiKomeiji();
  
  return 0;
}