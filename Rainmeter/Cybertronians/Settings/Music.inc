[Variables]
GeneralBg=0,0,0,100
Generalhover=0,0,0,250
;---
AutoBg=0,0,0,100
AutoHover=0,0,0,250
;---
DeceptiBg=0,0,0,100
DeceptiHover=0,0,0,250
;---
MusicBg=0,0,0,200
MusicHover=0,0,0,250
;---
LaunchBg=0,0,0,100
LaunchHover=0,0,0,250
;---
GeneralTint=255,255,255
AutoTint=255,255,255
DeceptiTint=255,255,255
MusicTint=0,160,0
LaunchTint=255,255,255

[MusicHead]
Meter=String
MeterStyle=HeadStyle
FontColor=0,160,0
Text=Music Options
X=375
Y=5

[PlayerPathTitle]
Meter=String
MeterStyle=SubHead
Text="Player Path :"
X=95
Y=75

[PlayerPathBack]
Meter=Shape
Shape=Rectangle 0,0,400,30 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainFile#" "File" "Variables" "PlayerPath" "#config#" "C:"]
X=5R
Y=-2r

[PlayerPath]
Meter=String
MeterStyle=Subtitle
Text=#PlayerPath#
X=4r
Y=4r
W=390
H=24
ClipString=1

[Player1Title]
Meter=String
MeterStyle=SubTitle
Text="Player 1 :"
X=115
Y=55r

[Player1Back]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 9"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Primary Music Player"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Player1]
Meter=String
MeterStyle=TextStyle
Text=#PlDe#
ClipString=1
X=5r
Y=2r
W=140
H=21

[Player2Title]
Meter=String
MeterStyle=SubTitle
Text="Player 2 :"
X=415
Y=-2r

[Player2Back]
Meter=Shape
Shape=Rectangle 0,0,145,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 10"]
MouseOverAction=[!SetOption Tooltip Text "Specify the Secondary Media Player"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]
X=8R
Y=r

[Player2]
Meter=String
MeterStyle=TextStyle
Text=#PlSe#
X=5r
Y=2r
W=130
H=21
;-----------
[SeparaterComment]
Meter=Shape
Shape=Line 0,0,575,0 | Stroke Color 220,220,220,240
X=90
Y=200

[PlayerTipTitle]
Meter=String
MeterStyle=SubHead
Text=Supported Players - Player Code
StringAlign=Center
X=375
Y=210

[AIMP]
Meter=String
MeterStyle=Subtitle
StringAlign=Center
Text=AIMP - AIMP
X=200
Y=255

[iTunes]
Meter=String
MeterStyle=Subtitle
StringAlign=Center
Text=iTunes - iTunes
X=r
Y=10R

[MediaMonkey]
Meter=String
MeterStyle=Subtitle
StringAlign=Center
Text=MediaMonkey - MediaMonkey
X=r
Y=10R

[Winamp]
Meter=String
MeterStyle=Subtitle
StringAlign=Center
Text=Winamp - Winamp
X=r
Y=10R

[Spotify]
Meter=String
MeterStyle=Subtitle
StringAlign=Center
Text=Spotify - Spotify
X=r
Y=10R

[WMP]
Meter=String
MeterStyle=Subtitle
StringAlign=Center
Text=Window PLayer - WMP
X=r
Y=10R

[Foobar2000]
Meter=String
MeterStyle=Subtitle
Solidcolor=0,0,0,1
StringAlign=Right
StringEffect=Border
FontEffectColor=0,0,255,100
MouseOverAction=[!SetOption Foobar2000 FontEffectColor "0,0,255,240"][!SetOption ToolTip Text "Double Click to download plugin"]
MouseLeaveAction=[!SetOption Foobar2000 FontEffectColor "0,0,255,100"][!SetOption ToolTip Text "#ToolTip#"]
Solidcolor=0,0,0,1
LeftMouseDoubleClickAction=[http://poiru.github.com/foo-cad/]
Text=Foobar2000 - CAD
X=580
Y=255

[MediaJukebox]
Meter=String
MeterStyle=Subtitle
StringAlign=Right
Text=MediaJukebox - CAD
X=r
Y=10R

[MusicBee]
Meter=String
MeterStyle=Subtitle
Solidcolor=0,0,0,1
StringAlign=Right
Text=MusicBee - CAD
X=r
Y=10R

[VLC]
Meter=String
MeterStyle=Subtitle
Solidcolor=0,0,0,1
StringAlign=Right
StringEffect=Border
FontEffectColor=0,0,255,100
MouseOverAction=[!SetOption VLC FontEffectColor "0,0,255,240"][!SetOption ToolTip Text "Double Click to download plugin for version 2.0.x#CRLF#2.1 and above are not supported"]
MouseLeaveAction=[!SetOption VLC FontEffectColor "0,0,255,100"][!SetOption ToolTip Text "#ToolTip#"]
Solidcolor=0,0,0,1
LeftMouseDoubleClickAction=[https://code.google.com/archive/p/vlc-libcad/]
Text=VLC Media Player - CAD
X=r
Y=10R

[Zune]
Meter=String
MeterStyle=Subtitle
StringAlign=Right
Text=OpenPandora | Zune - WLM
X=r
Y=10R

[CADTip]
Meter=String
MeterStyle=CommentStyle
StringAlign=Right
FontSize=7
Text=You may require to install a plugin for CAD player while some have it by default.#CRLF#Hover Over for more info. And be sure they are activated in settings.
X=100r
Y=20R