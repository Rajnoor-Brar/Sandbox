[Variables]
GeneralBg=0,0,0,100
Generalhover=0,0,0,250
;---
AutoBg=0,0,0,200
AutoHover=0,0,0,250g
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
GeneralTint=255,255,255
AutoTint=#BotColor2#,240
DeceptiTint=255,255,255
MusicTint=255,255,255
LaunchTint=255,255,255

[AutoHead]
Meter=String
MeterStyle=HeadStyle
FontColor=#BotColor2#,240
Text=Autobot Options
X=375
Y=5

[Separater1]
Meter=Shape
Shape=Line 365,65,365,430 | Stroke Color 240,240,240

[ColorsTitle]
Meter=String
MeterStyle=SubHead
Text="Colors"
X=95
Y=75

[Color1Title]
Meter=String
MeterStyle=SubTitle
Text="Color 1 :"
X=10r
Y=35r

[Color1Back]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainRGB#" "VarName=BotColor1" "FileName=#Config#" "RefreshConfig=#CurrentConfig#"]
MouseOverAction=[!SetOption Tooltip Text "Primary Text Color used for most of the Text"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=10R
Y=r

[Color1]
Meter=String
MeterStyle=TextStyle
Text=#BotColor1#
ClipString=1
X=5r
Y=2r
W=140
H=21

[Color2Title]
Meter=String
MeterStyle=SubTitle
Text="Color 2 :"
X=105
Y=35r

[Color2Back]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainRGB#" "VarName=BotColor2" "FileName=#Config#" "RefreshConfig=#CurrentConfig#"]
MouseOverAction=[!SetOption Tooltip Text "Primary Image Color used for most of the Images"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=8R
Y=r

[Color2]
Meter=String
MeterStyle=TextStyle
Text=#BotColor2#
ClipString=1
X=5r
Y=2r
W=140
H=21

[Color3Title]
Meter=String
MeterStyle=SubTitle
Text="Color 3 :"
X=105
Y=35r

[Color3Back]
Meter=Shape
Shape=Rectangle 0,0,150,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainRGB#" "VarName=BotColor3" "FileName=#Config#" "RefreshConfig=#CurrentConfig#"]
MouseOverAction=[!SetOption Tooltip Text "Supporting color for Contrast with Other colors"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=8R
Y=r

[Color3]
Meter=String
MeterStyle=TextStyle
Text=#BotColor3#
ClipString=1
X=5r
Y=2r
W=140
H=21

[ColorPlTitle]
Meter=String
MeterStyle=SubTitle
Text="Player Button Color:"
X=105
Y=35r

[ColorPlBack]
Meter=Shape
Shape=Rectangle 0,0,80,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainRGB#" "VarName=BotPlayerColor" "FileName=#Config#" "RefreshConfig=#CurrentConfig#"]
MouseOverAction=[!SetOption Tooltip Text "Color specific for Player Button on Top Center"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=2R
Y=r

[ColorPl]
Meter=String
MeterStyle=TextStyle
Text=#BotPlayerColor#
ClipString=1
X=2r
Y=2r
W=140
H=21

[WallpaperTitle]
Meter=String
MeterStyle=SubHead
Text="Wallpaper Settings"
X=400
Y=90

[SetWallpaper]
Meter=String
MeterStyle=SubTitle
SolidColor=0,0,0,1
Text="Set Wallpaper on every Reload?"
MouseOverAction=[!SetOption Tooltip Text "Whether to Set the autobot wallpaper everytime the Autobot Skins Reload/Refresh"]
MouseLeaveAction=[!SetOption Tooltip Text "#ToolTip#"]
X=10r
Y=25r

[WallMatch]
Measure=String
String=#BotWallpaper#
OnUpdateAction=[!SetVariable WallCurrent [WallMatch]][!UpdateMeasure WallpaperSet]
Substitute="\":"\\"

[WallPaperSet]
Measure=String
String=#BotWallSet#
IfMatch=#WallCurrent#
IfMatchAction=[!SetOption WallYes Solidcolor "220,220,220,250"][!SetOption WallNo Solidcolor "220,220,220,150"]
IfNotMatchAction=[!SetOption WallYes Solidcolor "220,220,220,150"][!SetOption WallNo Solidcolor "220,220,220,250"]
DynamicVariables=1

[WallYes]
Meter=Image
SolidColor=220,220,220,250
W=15
H=15
X=50r
Y=30r
LeftMouseDoubleClickAction=[!WriteKeyValue Variables BotWallSet "#*BotWallpaper*#" "#Config#"][!Refresh]
MouseOverAction=[!SetOption Tooltip Text "Set Wallpaper Every Refresh"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]

[WallYesTitle]
Meter=String
MeterStyle=Subtitle
Text="Yes"
X=20r
Y=-2r

[WallNo]
Meter=Image
SolidColor=220,220,220,250
W=15
H=15
X=100r
Y=2r
LeftMouseDoubleClickAction=[!WriteKeyValue Variables BotWallSet "#*None*#" "#Config#"][!Refresh]
MouseOverAction=[!SetOption Tooltip Text "Don't set wallpaper every refresh'"]
MouseLeaveAction=[!SetOption Tooltip Text "#Tooltip#"]

[WallNoTitle]
Meter=String
MeterStyle=Subtitle
Text="No"
X=20r
Y=-2r