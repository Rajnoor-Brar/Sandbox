[Variables]
GeneralBg=0,0,0,200
Generalhover=0,0,0,250
;---
AutoBg=0,0,0,100
AutoHover=0,0,0,250
;---
DeceptiBg=0,0,0,100
DeceptiHover=0,0,0,250
;---
MusicBg=0,0,0,100
MusicHover=0,0,0,250
;---
LaunchBg=0,0,0,100
LaunchHover=0,0,0,250
;----
GeneralTint=247,147,30
AutoTint=255,255,255
DeceptiTint=255,255,255
MusicTint=255,255,255
LaunchTint=255,255,255

[GeneralHead]
Meter=String
MeterStyle=HeadStyle
FontColor=247,147,30
Text=General Options
X=375
Y=5

[Separater1]
Meter=Shape
Shape=Line 375,65,375,450 | Stroke Color 240,240,240

[Drive1Title]
Meter=String
MeterStyle=SubHead
Text="Drive 1"
X=95
Y=75

[Drive1LabelTitle]
Meter=String
MeterStyle=SubTitle
Text="Drive 1 Label :"
X=10r
Y=35r

[Drive1LabelBack]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 2"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Custom Drive Name you would like display"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Drive1Label]
Meter=String
MeterStyle=TextStyle
Text=#drive1name#
ClipString=1
X=5r
Y=2r
W=140
H=21

[Drive1PathTitle]
Meter=String
MeterStyle=SubTitle
Text="Drive 1 Letter :"
X=105
Y=5R

[Drive1PathBack]
Meter=Shape
Shape=Rectangle 0,0,145,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 1"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Drive Letter of cencerned Drive#CRLF#Please include ':' after the Letter"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Drive1Path]
Meter=String
MeterStyle=TextStyle
Text=#drive1#
X=5r
Y=2r
W=130
H=21

[Drive2Title]
Meter=String
MeterStyle=SubHead
Text="Drive 2"
X=95
Y=190

[Drive2LabelTitle]
Meter=String
MeterStyle=SubTitle
Text="Drive 2 Label :"
X=10r
Y=35r

[Drive2LabelBack]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 4"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Custom Drive Name you would like display"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Drive2Label]
Meter=String
MeterStyle=TextStyle
Text=#drive2name#
ClipString=1
X=5r
Y=2r
W=140
H=21

[Drive2PathTitle]
Meter=String
MeterStyle=SubTitle
Text="Drive 2 Letter :"
X=105
Y=5R

[Drive2PathBack]
Meter=Shape
Shape=Rectangle 0,0,145,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 3"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Drive Letter of cencerned Drive#CRLF#Please include ':' after the Letter"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Drive2Path]
Meter=String
MeterStyle=TextStyle
Text=#drive2#
X=5r
Y=2r
W=130
H=21

[Drive3Title]
Meter=String
MeterStyle=SubHead
Text="Drive 3"
X=95
Y=305

[Drive3LabelTitle]
Meter=String
MeterStyle=SubTitle
Text="Drive 3 Label :"
X=105
Y=35r

[Drive3LabelBack]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 6"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Custom Drive Name you would like display"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Drive3Label]
Meter=String
MeterStyle=TextStyle
Text=#drive3name#
ClipString=1
X=5r
Y=2r
W=140
H=21

[Drive3PathTitle]
Meter=String
MeterStyle=SubTitle
Text="Drive 3 Letter :"
X=105
Y=5R

[Drive3PathBack]
Meter=Shape
Shape=Rectangle 0,0,145,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 5"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Drive Letter of cencerned Drive#CRLF#Please include ':' after the Letter"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Drive3Path]
Meter=String
MeterStyle=TextStyle
Text=#drive3#
X=5r
Y=2r
W=130
H=21

[FontsTitle]
Meter=String
MeterStyle=SubHead
Text=Fonts
X=400
Y=75

[Font1Title]
Meter=String
MeterStyle=SubTitle
Text="Thick Font :"
X=10r
Y=35r

[Font1Back]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 7"]
MouseOverAction=[!SetOption Tooltip Text "Thick and Bold Font, for Larger or decorative Texts"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Font1]
Meter=String
MeterStyle=TextStyle
Text=#Font1#
ClipString=1
X=5r
Y=2r
W=140
H=21

[Font2Title]
Meter=String
MeterStyle=SubTitle
Text="Normal Font :"
X=410
Y=30r

[Font2Back]
Meter=Shape
Shape=Rectangle 0,0,145,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 8"]
MouseOverAction=[!SetOption Tooltip Text "Light and Thin font used to display most of Information in a precisely readable form"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=3R
Y=r

[Font2]
Meter=String
MeterStyle=TextStyle
Text=#Font2#
ClipString=1
X=5r
Y=2r
W=140
H=21

[BatteryTitle]
Meter=String
MeterStyle=SubHead
Text="Battery"
X=400
Y=190

[IncludeBattery]
Meter=String
MeterStyle=SubTitle
SolidColor=0,0,0,1
Text="Include Battery Info?"
MouseOverAction=[!SetOption Tooltip Text "User can choose whether to display Remaining Battery info or not#CRlF#Desktop User are recommended to disable it"]
MouseLeaveAction=[!SetOption Tooltip Text "#ToolTip#"]
X=10r
Y=25r

[BatteryInclude]
Measure=String
String=#Battery#
IfMatch=Battery
IfMatchAction=[!SetOption BattYes Solidcolor "220,220,220,250"][!SetOption BattNo Solidcolor "220,220,220,150"]
IfNotMatchAction=[!SetOption BattYes Solidcolor "220,220,220,150"][!SetOption BattNo Solidcolor "220,220,220,250"]

[BattYes]
Meter=Image
SolidColor=220,220,220,250
W=15
H=15
X=50r
Y=30r
LeftMouseDoubleClickAction=[!WriteKeyValue Variables Battery "Battery" "#Config#"][!Refresh]
MouseOverAction=[!SetOption Tooltip Text "Enable Battery Meter"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]

[BattYesTitle]
Meter=String
MeterStyle=Subtitle
Text="Yes"
X=20r
Y=-2r

[BattNo]
Meter=Image
SolidColor=220,220,220,250
W=15
H=15
X=100r
Y=2r
LeftMouseDoubleClickAction=[!WriteKeyValue Variables Battery "None" "#Config#"][!Refresh]
MouseOverAction=[!SetOption Tooltip Text "Disable Battery Meter"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]

[BattNoTitle]
Meter=String
MeterStyle=Subtitle
Text="No"
X=20r
Y=-2r