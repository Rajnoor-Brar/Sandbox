;===========Battery===========
[MeasureAC]
Measure=Plugin
PlugIn=Plugins\PowerPlugin.dll
PowerState=ACLINE
UpdateDivider=20
IfCondition=(MeasureAC = 1) && (MeasurePercent < 100)
IfTrueAction=[!SetOption MeterLifeTime Text "Lifetime Rising"][!SetOption MeterLifeStat Text "Spark#CRLF#Energizing"][!UpdateMeasure MeasurePercent]
;--
IfCondition2=(MeasureAC = 0)
IfTrueAction2=[!SetOption MeterLifeTime Text "%1 %2"][!SetOption MeterLifeStat Text "Spark#CRLF#Burning"]

[MeasurePercent]
Measure=Plugin
Plugin=Plugins\PowerPlugin.dll
PowerState=PERCENT
Group=Main
UpdateDivider=20
Disabled=1
;--
IfCondition=(MeasurePercent = 100) && (MeasureAC = 1)
IfTrueAction=[!SetOption MeterLifeTime Text "Energy Stable"][!SetOption MeterLifeStat Text "Spark#CRLF#Energized"]
;--
IfCondition2=(MeasurePercent < 15) && (MeasureAC = 0)
IfTrueAction2=[!SetOption MeterLifeStat Text "Spark#CRLF#Critical"]

[MeasureLifeTime]
Measure=Plugin
Plugin=Plugins\PowerPlugin.dll
PowerState=LIFETIME
UpdateDivider=20
Format=%H Hr :
Substitute="Unknown":"_Hr :","00":"0"

[MeasureLifeTime2]
Measure=Plugin
Plugin=Plugins\PowerPlugin.dll
PowerState=LIFETIME
UpdateDivider=20
Format=%M Min
Substitute="Unknown":"_Min","00":"0"

[Meter20]
Meter=Bitmap
MeasureName=MeasurePercent
BitmapImage=#@#Images\bat.png
BitmapFrames=20
BitmapZeroFrame=1
x=1080
y=105
ImageTint=#Color1#
UpdateDivider=20
Group=main
Hidden=1

[Roundline]
Meter=Roundline
MeasureName=MeasurePercent
x=-13r
y=-13r
h=200
w=200
LineWidth=1
LineLength=82
LineStart=80
StartAngle=-7.98
RotationAngle=3.14159265
AntiAlias=1
LineColor=#Color1#
Solid=1
UpdateDivider=20
Group=main
Hidden=1

[Roundline2]
Meter=Roundline
MeasureName=MeasurePercent
x=-1r
y=r
h=200
w=200
LineWidth=1
LineLength=82
LineStart=80
StartAngle=7.73
RotationAngle=3.14159265
AntiAlias=1
LineColor=#Color1#
Solid=1
UpdateDivider=20
Group=main
Hidden=1

[Roundline3]
Meter=Roundline
MeasureName=MeasurePercent
x=1r
y=r
h=200
w=200
LineWidth=1
LineLength=68
LineStart=66
StartAngle=-7.98
RotationAngle=3.14159265
AntiAlias=1
LineColor=#Color1#
Solid=1
UpdateDivider=20
Group=main
Hidden=1

[Roundline4]
Meter=Roundline
MeasureName=MeasurePercent
x=-1r
y=r
h=200
w=200
LineWidth=1
LineLength=68
LineStart=66
StartAngle=7.73
RotationAngle=3.14159265
AntiAlias=1
LineColor=#Color1#
Solid=1
UpdateDivider=20
Group=main
Hidden=1

[MeterPercent]
Meter=String
MeasureName=MeasurePercent
StringEffect=Border
FontEffectColor=0,0,0,220
X=101r
Y=40r
FontColor=#Color1#
FontFace=Cybertron Condensed
FontSize=11
Postfix=%
StringAlign=Center
AntiAlias=1
Text=%1
UpdateDivider=20
Group=main
Hidden=1

[MeterLifeTime]
Meter=String
MeasureName=MeasureLifeTime
MeasureName2=MeasureLifeTime2
X=r
Y=20r
StringEffect=Border
FontEffectColor=0,0,0,220
FontColor=#Color1#
FontFace=Cybertron Condensed
FontSize=10
StringAlign=Center
AntiAlias=1
Text="%1 %2"
UpdateDivider=20
Group=main
Hidden=1

[MeterLifeStat]
Meter=String
X=r
Y=60r
StringAlign=Center
Text=
StringEffect=Border
FontEffectColor=0,0,0,220
FontColor=#Color1#
FontSize=9
FontFace=Steelwolf
UpdateDivider=20
AntiAlias=1
Group=main
Hidden=1