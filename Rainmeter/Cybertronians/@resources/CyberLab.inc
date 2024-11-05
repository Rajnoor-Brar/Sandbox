;------A Secret Lab being run mutually by ShockWave and WheelJack, despite the faction issues, to uncover the Phenomenal Secrets of Rainmeter.

[TextStyle1]
FontColor=#Color1#,255
FontEffectColor=0,0,0,80
StringEffect=BORDER
StringStyle=NORMAL
FontFace=Cyberverse Condensed
AntiAlias=1

[TextStyle2]
FontColor=#Color2#,255
FontEffectColor=255,0,0,30
StringEffect=BORDER
StringStyle=NORMAL
FontFace=Cyberverse Condensed
AntiAlias=1

[TextStyle3]
FontColor=#Color1#,250
FontEffectColor=0,0,0,100
StringEffect=BORDER
StringStyle=NORMAL
FontFace=Autobus
AntiAlias=1

[NoteText]
FontColor=240,240,240
FontFace=PIRULEN RG
FontEffectColor=0,0,0,80
StringEffect=NONE
StringAlign=left
AntiAlias=1
;==================Date & Time===========
[MeasureD]
Measure=Time
Format=%d
StringIndex=1
UpdateDivider=600
;---Too Many Conditions, Too Many Actions!
IfCondition=(MeasureD = 01)
IfTrueAction=[!SetOption 1 MeterStyle "TextStyle1"][!SetOption 1 Text "1 %1"]
IfFalseAction=[!SetOption 1 MeterStyle "TextStyle2"][!SetOption 1 Text "1"]
;---
IfCondition2=(MeasureD = 02)
IfTrueAction2=[!SetOption 2 MeterStyle "TextStyle1"][!SetOption 2 Text "2 %1"]
IfFalseAction2=[!SetOption 2 MeterStyle "TextStyle2"][!SetOption 2 Text "2"]
;---
IfCondition3=(MeasureD = 03)
IfTrueAction3=[!SetOption 3 MeterStyle "TextStyle1"][!SetOption 3 Text "3 %1"]
IfFalseAction3=[!SetOption 3 MeterStyle "TextStyle2"][!SetOption 3 Text "3"]
;---
IfCondition4=(MeasureD = 04)
IfTrueAction4=[!SetOption 4 MeterStyle "TextStyle1"][!SetOption 4 Text "4 %1"]
IfFalseAction4=[!SetOption 4 MeterStyle "TextStyle2"][!SetOption 4 Text "4"]
;---
IfCondition5=(MeasureD = 05)
IfTrueAction5=[!SetOption 5 MeterStyle "TextStyle1"][!SetOption 5 Text "5 %1"]
IfFalseAction5=[!SetOption 5 MeterStyle "TextStyle2"][!SetOption 5 Text "5"]
;---
IfCondition6=(MeasureD = 06)
IfTrueAction6=[!SetOption 6 MeterStyle "TextStyle1"][!SetOption 6 Text "6 %1"]
IfFalseAction6=[!SetOption 6 MeterStyle "TextStyle2"][!SetOption 6 Text "6"]
;---
IfCondition7=(MeasureD = 07)
IfTrueAction7=[!SetOption 7 MeterStyle "TextStyle1"][!SetOption 7 Text "7 %1"]
IfFalseAction7=[!SetOption 7 MeterStyle "TextStyle2"][!SetOption 7 Text "7"]
;---
IfCondition8=(MeasureD = 08)
IfTrueAction8=[!SetOption 8 MeterStyle "TextStyle1"][!SetOption 8 Text "8 %1"]
IfFalseAction8=[!SetOption 8 MeterStyle "TextStyle2"][!SetOption 8 Text "8"]
;---
IfCondition9=(MeasureD = 09)
IfTrueAction9=[!SetOption 9 MeterStyle "TextStyle1"][!SetOption 9 Text "9 %1"]
IfFalseAction9=[!SetOption 9 MeterStyle "TextStyle2"][!SetOption 9 Text "9"]
;---
IfCondition10=(MeasureD = 10)
IfTrueAction10=[!SetOption 10 MeterStyle "TextStyle1"][!SetOption 10 Text "10 %1"]
IfFalseAction10=[!SetOption 10 MeterStyle "TextStyle2"][!SetOption 10 Text "10"]
;---
IfCondition11=(MeasureD = 11)
IfTrueAction11=[!SetOption 11 MeterStyle "TextStyle1"][!SetOption 11 Text "11 %1"]
IfFalseAction11=[!SetOption 11 MeterStyle "TextStyle2"][!SetOption 11 Text "11"]
;---
IfCondition12=(MeasureD = 12)
IfTrueAction12=[!SetOption 12 MeterStyle "TextStyle1"][!SetOption 12 Text "12 %1"]
IfFalseAction12=[!SetOption 12 MeterStyle "TextStyle2"][!SetOption 12 Text "12"]
;---
IfCondition13=(MeasureD = 13)
IfTrueAction13=[!SetOption 13 MeterStyle "TextStyle1"][!SetOption 13 Text "13 %1"]
IfFalseAction13=[!SetOption 13 MeterStyle "TextStyle2"][!SetOption 13 Text "13"]
;---
IfCondition14=(MeasureD = 14)
IfTrueAction14=[!SetOption 14 MeterStyle "TextStyle1"][!SetOption 14 Text "14 %1"]
IfFalseAction14=[!SetOption 14 MeterStyle "TextStyle2"][!SetOption 14 Text "14"]
;---
IfCondition15=(MeasureD = 15)
IfTrueAction15=[!SetOption 15 MeterStyle "TextStyle1"][!SetOption 15 Text "15 %1"]
IfFalseAction=15[!SetOption 15 MeterStyle "TextStyle2"][!SetOption 15 Text "15"]
;---
IfCondition16=(MeasureD = 16)
IfTrueAction16=[!SetOption 16 MeterStyle "TextStyle1"][!SetOption 16 Text "16 %1"]
IfFalseAction16=[!SetOption 16 MeterStyle "TextStyle2"][!SetOption 16 Text "16"]
;---
IfCondition17=(MeasureD = 17)
IfTrueAction17=[!SetOption 17 MeterStyle "TextStyle1"][!SetOption 17 Text "17 %1"]
IfFalseAction17=[!SetOption 17 MeterStyle "TextStyle2"][!SetOption 17 Text "17"]
;---
IfCondition18=(MeasureD = 18)
IfTrueAction18=[!SetOption 18 MeterStyle "TextStyle1"][!SetOption 18 Text "18 %1"]
IfFalseAction18=[!SetOption 18 MeterStyle "TextStyle2"][!SetOption 19 Text "18"]
;---
IfCondition19=(MeasureD = 19)
IfTrueAction19=[!SetOption 19 MeterStyle "TextStyle1"][!SetOption 19 Text "19 %1"]
IfFalseAction19=[!SetOption 19 MeterStyle "TextStyle2"][!SetOption 19 Text "19"]
;---
IfCondition20=(MeasureD = 20)
IfTrueAction20=[!SetOption 20 MeterStyle "TextStyle1"][!SetOption 20 Text "20 %1"]
IfFalseAction20=[!SetOption 20 MeterStyle "TextStyle2"][!SetOption 20 Text "20"]
;---
IfCondition21=(MeasureD = 21)
IfTrueAction21=[!SetOption 21 MeterStyle "TextStyle1"][!SetOption 21 Text "21 %1"]
IfFalseAction21=[!SetOption 21 MeterStyle "TextStyle2"][!SetOption 21 Text "21"]
;---
IfCondition22=(MeasureD = 22)
IfTrueAction22=[!SetOption 22 MeterStyle "TextStyle1"][!SetOption 22 Text "22 %1"]
IfFalseAction22=[!SetOption 22 MeterStyle "TextStyle2"][!SetOption 22 Text "22"]
;---
IfCondition23=(MeasureD = 23)
IfTrueAction23=[!SetOption 23 MeterStyle "TextStyle1"][!SetOption 23 Text "23 %1"]
IfFalseAction23=[!SetOption 23 MeterStyle "TextStyle2"][!SetOption 23 Text "23"]
;---
IfCondition24=(MeasureD = 24)
IfTrueAction24=[!SetOption 24 MeterStyle "TextStyle1"][!SetOption 24 Text "24 %1"]
IfFalseAction24=[!SetOption 24 MeterStyle "TextStyle2"][!SetOption 24 Text "24"]
;---
IfCondition25=(MeasureD = 25)
IfTrueAction25=[!SetOption 25 MeterStyle "TextStyle1"][!SetOption 25 Text "25 %1"]
IfFalseAction25=[!SetOption 25 MeterStyle "TextStyle2"][!SetOption 25 Text "25"]
;---
IfCondition26=(MeasureD = 26)
IfTrueAction26=[!SetOption 26 MeterStyle "TextStyle1"][!SetOption 26 Text "26 %1"]
IfFalseAction26=[!SetOption 26 MeterStyle "TextStyle2"][!SetOption 26 Text "26"]
;---
IfCondition27=(MeasureD = 27)
IfTrueAction27=[!SetOption 27 MeterStyle "TextStyle1"][!SetOption 27 Text "27 %1"]
IfFalseAction27=[!SetOption 27 MeterStyle "TextStyle2"][!SetOption 27 Text "27"]
;---
IfCondition28=(MeasureD = 28)
IfTrueAction28=[!SetOption 28 MeterStyle "TextStyle1"][!SetOption 28 Text "28 %1"]
IfFalseAction28=[!SetOption 28 MeterStyle "TextStyle2"][!SetOption 28 Text "28"]
;---
IfCondition29=(MeasureD = 29)
IfTrueAction29=[!SetOption 29 MeterStyle "TextStyle1"][!SetOption 29 Text "29 %1"]
IfFalseAction29=[!SetOption 29 MeterStyle "TextStyle2"][!SetOption 29 Text "29"]
;---
IfCondition30=(MeasureD = 30)
IfTrueAction30=[!SetOption 30 MeterStyle "TextStyle1"][!SetOption 30 Text "30 %1"]
IfFalseAction30=[!SetOption 30 MeterStyle "TextStyle2"][!SetOption 30 Text "30"]
;---
IfCondition31=(MeasureD = 31)
IfTrueAction31=[!SetOption 31 MeterStyle "TextStyle1"][!SetOption 31 Text "31 %1"]
IfFalseAction31=[!SetOption 31 MeterStyle "TextStyle2"][!SetOption 31 Text "31"]

[MeasureDay]
Measure=Time
Format=%A
UpdateDivider=600

[MMonth]
Measure=Time
Format=%m
IfCondition=(MMonth = 01) | (MMonth = 03)  | (MMonth = 05) | (MMonth = 07) | (MMonth = 08) | (MMonth = 10) | (MMonth = 12)
IfTrueAction=[!ShowMeterGroup DT][!ShowMeter 31]
IfCondition2=(MMonth = 04) | (MMonth = 06)  | (MMonth = 09) | (MMonth = 11)
IfTrueAction2=[!ShowMeterGroup DT][!HideMeter 31]
IfCondition3=(MMonth = 02)
IfTrueAction3=[!HideMeterGroup DT][!HideMeter 31]
UpdateDivider=600

[MeasureMonth]
Measure=Time
Format=%B
UpdateDivider=600
Group=time

[MeasureYear]
Measure=Time
Format=%Y
Group=time
UpdateDivider=36000

[MeasureH]
Measure=Time
Format="%H"

[MeasureM]
Measure=Time
Format="%M"

[MeasureTimeS]
Measure=Time
Format=%S
UpdateDivider=5

[TimeHM]
Meter=string
MeterStyle=TextStyle1
MeasureName=MeasureH
MeasureName2=MeasureM
Text="%1:%2"
FontSize=20
x=0
y=0

[TimeS]
Meter=string
MeterStyle=TextStyle1
MeasureName=MeasureTimeS
StringAlign=Center
Text=%1
FontSize=14
x=40
y=25

[TimeBase]
Meter=Image
ImageName=#@#Images\files\time01.png
ImageTint=#color3#
x=0
y=15

[Day]
Meter=string
MeterStyle=TextStyle1
MeasureName=MeasureDay
Text=%1
FontSize=14
x=65
y=27

[1]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=1
FontSize=10
x=40
y=48

[2]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=2
FontSize=10
x=r
y=R

[3]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=3
FontSize=10
x=r
y=R

[4]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=4
FontSize=10
x=r
y=R

[5]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=5
FontSize=10
x=r
y=R

[6]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=6
FontSize=10
x=r
y=R

[7]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=7
FontSize=10
x=r
y=R

[8]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=8
FontSize=10
x=r
y=R

[9]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=9
FontSize=10
x=r
y=R

[10]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=10
FontSize=10
x=r
y=R

[11]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=11
FontSize=10
x=r
y=R

[12]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=12
FontSize=10
x=r
y=R

[13]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=13
FontSize=10
x=r
y=R

[14]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=14
FontSize=10
x=r
y=R

[15]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=15
FontSize=10
x=r
y=R

[16]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=16
FontSize=10
x=r
y=R

[17]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=17
FontSize=10
x=r
y=R

[18]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=18
FontSize=10
x=r
y=R

[19]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=19
FontSize=10
x=r
y=R

[20]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=20
FontSize=10
x=r
y=R

[21]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=21
FontSize=10
x=r
y=R

[22]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=22
FontSize=10
x=r
y=R

[23]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=23
FontSize=10
x=r
y=R

[24]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=25
FontSize=10
x=r
y=R

[25]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=25
FontSize=10
x=r
y=R

[26]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=26
FontSize=10
x=r
y=R

[27]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=27
FontSize=10
x=r
y=R

[28]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=28
FontSize=10
x=r
y=R

[29]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=29
FontSize=10
x=r
y=R
Group=DT

[30]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=30
FontSize=10
x=r
y=R
group=DT

[31]
Meter=string
MeterStyle=TextStyle2
MeasureName=MeasureMonth
Text=31
FontSize=10
x=r
y=R

[Year]
Meter=string
MeterStyle=TextStyle1
MeasureName=MeasureYear
Text=%1
FontSize=15
x=-15r
y=R

;==========
[main02]
Meter=image
ImageName=#@#Images\files\main02.png
ImageTint=#color3#,255
x=25
y=660

[MeasureUptimeD]
Measure=Uptime
Format=%4!02i! Days
UpdateDivider=600

[MeasureUptimeH]
Measure=Uptime
Format=%3!02i! Hrs
AddDaysToHours=0
UpdateDivider=600

[MeasureUptimeM]
Measure=Uptime
Format=%2!02i! Mins

[Uptime]
Meter=string
MeterStyle=TextStyle1
FontSize=10
StringAlign=left
Text=UP-TIME
x=80
y=702

[UptimeD]
Meter=String
MeasureName=MeasureUptimeD
MeterStyle=TextStyle1
FontSize=12
StringAlign=Right
X=255
Y=660
Text=%1

[UptimeH]
Meter=String
MeasureName=MeasureUptimeH
MeterStyle=TextStyle1
FontSize=12
StringAlign=Left
X=90
Y=680
Text=%1

[UpTimeM]
Meter=String
MeasureName=MeasureUptimeM
MeterStyle=TextStyle1
FontSize=12
StringAlign=right
X=255
Y=680
Text=%1

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
x=145
y=105
ImageTint=#Color1#

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
AntiAlias=1
;==============Player
[PlDe]
Measure=NowPlaying
PlayerName=#PlDe#
PlayerType=STATE

[PlSe]
Measure=NowPlaying
PlayerName=#PlSe#
PlayerType=STATE
;---------------
IfCondition=(PlSe = 1) & (PlDe = 1)
IfTrueAction=[!SetOption PlayerSet PlayerName "#PlDe#"][!UpdateMeasure PlayerSet][!Redraw]
;-Because Default Player is more important!
;------------------------
IfCondition2=(PlSe = 2) & (PlDe = 2)
IfTrueAction2=[!SetOption PlayerSet PlayerName "#PlDe#"][!UpdateMeasure PlayerSet][!Redraw]
;------------------------
IfCondition3=(PlSe = 0) & (PlDe = 2)
IfTrueAction3=[!SetOption PlayerSet PlayerName "#PlDe#"][!UpdateMeasure PlayerSet][!Redraw]
;------------------------
IfCondition4=(PlSe = 1) & (PlDe = 2)
IfTrueAction4=[!SetOption PlayerSet PlayerName "#PlSe#"][!UpdateMeasure PlayerSet][!Redraw]
;------------------------
IfCondition5=(PlSe = 1) & (PlDe = 0)
IfTrueAction5=[!SetOption PlayerSet PlayerName "#PlSe#"][!UpdateMeasure PlayerSet][!Redraw]
;------------------------
IfCondition6=(PlSe = 0) & (PlDe = 1)
IfTrueAction6=[!SetOption PlayerSet PlayerName "#PlDe#"][!UpdateMeasure PlayerSet][!Redraw]
;------------------------
IfCondition7=(PlSe = 0) & (PlDe = 0)
IfTrueAction7=[!SetOption PlayerSet PlayerName "#PlDe#"][!UpdateMeasure PlayerSet][!Redraw]
;------------------------
IfCondition8=(PlSe = 2) & (PlDe = 1)
IfTrueAction8=[!SetOption PlayerSet PlayerName "#PlDe#"][!UpdateMeasure PlayerSet][!Redraw]
;------------------------
IfCondition9=(PlSe = 2) & (PlDe = 0)
IfTrueAction9=[!SetOption PlayerSet PlayerName "#PlDe#"][!UpdateMeasure PlayerSet][!Redraw]

[PlayerSet]
Measure=NowPlaying
PlayerName=#PlDe#
PlayerType=TITLE
PlayerPath=#PlayerPath#
TrackChangeAction=[!UpdateMeasure MeasureCoverArt]
Substitute="":"N/A"

[ArtistCheck]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=ARTIST
Substitute="":"N/A"

[AlbumCheck]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=ALBUM

[PositionCheck]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=POSITION

[DurationCheck]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=DURATION
Disabled=1
Group=main
IfEqualValue=0
IfEqualAction=[!HideMeterGroup Pl2]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup Pl1][!ShowMeterGroup Pl2]

[StausCheck]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=Status
Group=Main
Disabled=1
IfEqualValue=0
IfEqualAction=[!HideMeterGroup Pl1][!HideMeterGroup Pl2][!HideMeter PowerCa][!ShowMeter PowerC]
IfAboveValue=0
IfAboveAction=[!HideMeter PowerC][!ShowMeter PowerCa][!ShowMeterGroup Pl1]

[Progress]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=PROGRESS

[RepeatSet]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=REPEAT

[CalcRepeat]
Measure=Calc
Formula=-(RepeatSet+1)
Substitute="-1":"#Color1#,180","-2":"#Color3#,250"

[ShuffleSet]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=SHUFFLE

[CalcShuffle]
Measure=Calc
Formula=-(ShuffleSet+1)
Substitute="-1":"#Color1#,180","-2":"#Color3#,250"

[MeasureCoverArt]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=COVER
Disabled=1
Group=main
UpdateDivider=50
Substitute="":"NA"
IfMatch="NA"
IfMatchAction=[!HideMeterGroup Cover]
IfNotMatchAction=[!ShowMeterGroup Cover]

[MeasureVolume]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=VOLUME

[StateSet]
Measure=NowPlaying
PlayerName=[PlayerSet]
PlayerType=STATE
Substitute="0":"4","1":";","2":"4"
;--
[PlayerBody]
Meter=Image
ImageName=#@#Images\files\playerbg1.png
ImageTint=#color2#,255
x=485
y=170
Group=Pl1
Hidden=1

[Circle01b]
Meter=Roundline
X=685
Y=365
LineWidth=5
StartAngle=-2.49
LineLength=100
LineStart=95
LineColor=#Color1#,40
Solid=1
AntiAlias=1
Group=Pl1
Hidden=1

[Circle02b]
Meter=Roundline
X=r
Y=r
LineWidth=5
StartAngle=0.396
LineLength=79
LineStart=74
LineColor=#Color1#,40
Solid=1
AntiAlias=1
Group=Pl1
Hidden=1

[Circle03b]
Meter=Roundline
X=r
Y=r
LineWidth=5
StartAngle=-2.49
LineLength=67
LineStart=62
LineColor=#Color1#,40
Solid=1
AntiAlias=1
Group=Pl1
Hidden=1

[Circle01]
Meter=Roundline
MeasureName=Progress
X=r
Y=r
LineWidth=5
StartAngle=-2.67
RotationAngle=-6.283
LineLength=100
LineStart=95
LineColor=#Color3#
Solid=1
AntiAlias=1
Group=Pl2
Hidden=1

[Circle02]
Meter=Roundline
MeasureName=Progress
X=r
Y=r
LineWidth=5
StartAngle=0.396
RotationAngle=6.283
LineLength=79
LineStart=74
LineColor=#Color3#
Solid=1
AntiAlias=1
Group=Pl2
Hidden=1

[Circle03]
Meter=Roundline
MeasureName=Progress
X=r
Y=r
LineWidth=5
StartAngle=0.395
RotationAngle=-6.283
LineLength=67
LineStart=62
LineColor=#color3#
Solid=1
AntiAlias=1
Group=Pl2
Hidden=1

[TrackStage]
Meter=IMAGE
ImageName=#@#Images\files\main04.png
ImageTint=#Color1#
X=-7r
Y=-14r
Group=Pl1
Hidden=1

[CoverStage]
Meter=Image
ImageTint=#color2#,255
ImageCrop=0,0,274,55
ImageName=#@#Images\files\line3.png
X=110r
Y=15r
ImageFlip=HORIZONTAL
Group=cover
Hidden=1

[CoverFrame]
Meter=Image
ImageTint=#color2#
ImageName=#@#Images\files\targ02.png
X=138r
Y=-72r
W=110
H=110
Group=cover
Hidden=1

[CoverArt]
Meter=IMAGE
MeasureName=MeasureCoverArt
X=12r
Y=12r
H=86
W=86
Antialias = 1
Group=cover
Hidden=1

[NowPlay]
Meter=String
MeasureName=PlayerSet
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=11
StringAlign=Left
X=-252r
Y=40r
W=250
H=17
Clipstring=1
Text="%1"
Group=Pl2
Hidden=1

[ArtistText]
Meter=String
MeasureName=ArtistCheck
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=11
StringAlign=Right
X=85r
Y=20r
W=150
H=18
Clipstring=1
Text="%1"
Group=Pl2
Hidden=1

[AlbumText]
Meter=String
MeasureName=AlbumCheck
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=11
StringAlign=Left
X=15r
Y=r
W=150
H=18
Clipstring=1
Text="%1"
Group=Pl2
Hidden=1

[DurationText]
Meter=String
MeasureName=PositionCheck
MeasureName2=DurationCheck
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=10
StringAlign=Left
X=5r
Y=20r
Text="%1/%2"
Group=Pl2
Hidden=1

[VolumeText]
Meter=String
MeasureName=MeasureVolume
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=10
StringAlign=Center
X=-20r
Y=55r
Text="%1%"
Angle=-0.84
Group=Pl2
Hidden=1

[Previous]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=16
StringAlign=Center
FontFace=Webdings
X=-189r
Y=-111r
Text="9"
Angle=2.0
Group=Pl1
Hidden=1

[TPl1]
Meter=IMAGE
SolidColor=0,0,0,1
W=16
H=16
X=-19r
Y=-13r
Group=Pl1
Hidden=1
MouseOverAction=[!SetOption Previous FontEffectColor #Color1#,80][!SetOption PlayerTTip Text "Previous"][!ShowMeter PlayerTTip][!Redraw]
MouseLeaveAction=[!SetOption Previous FontEffectColor 0,0,0,80][!HideMeter PlayerTTip][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "Previous"]

[Play]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=16
StringAlign=Center
FontFace=Webdings
X=13r
Y=33r
Text=[StateSet]
Angle=1.8
Group=Pl1
Hidden=1

[TPl2]
Meter=IMAGE
SolidColor=0,0,0,1
W=16
H=14
X=-19r
Y=-10r
Group=Pl1
Hidden=1
MouseOverAction=[!SetOption Play FontEffectColor #Color1#,80][!SetOption PlayerTTip Text "Play/Pause"][!ShowMeter PlayerTTip][!Redraw]
MouseLeaveAction=[!SetOption Play FontEffectColor 0,0,0,80][!HideMeter PlayerTTip][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "PlayPause"]

[Stop]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=16
StringAlign=Center
FontFace=Webdings
X=16r
Y=30r
Text="<"
Angle=1.6
Group=Pl1
Hidden=1

[TPl3]
Meter=IMAGE
SolidColor=0,0,0,1
W=15
H=15
X=-18r
Y=-8r
Group=Pl1
Hidden=1
MouseOverAction=[!SetOption Stop FontEffectColor #Color1#,80][!SetOption PlayerTTip Text "Stop"][!ShowMeter PlayerTTip][!Redraw]
MouseLeaveAction=[!SetOption Stop FontEffectColor 0,0,0,80][!HideMeter PlayerTTip][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "Stop"]

[Next]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=16
StringAlign=Center
FontFace=Webdings
X=21r
Y=28r
Text=":"
Angle=1.4
Group=Pl1
Hidden=1

[TPl4]
Meter=IMAGE
SolidColor=0,0,0,1
W=16
H=16
X=-19r
Y=-6r
Group=Pl1
Hidden=1
MouseOverAction=[!SetOption Next FontEffectColor #Color1#,80][!SetOption PlayerTTip Text "Next"][!ShowMeter PlayerTTip][!Redraw]
MouseLeaveAction=[!SetOption Next FontEffectColor 0,0,0,80][!HideMeter PlayerTTip][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "Next"]

[PlayerTTip]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,240
StringEffect=Border
FontSize=14
StringAlign=Right
W=284
H=55
X=28r
Y=34r
Text="Play"
Angle=-0.55
AntiAlias=1
Hidden=1

[Jump-]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=16
StringAlign=Center
FontFace=Webdings
X=47r
Y=49r
Text="7"
Angle=0.5
Group=Pl1
Hidden=1

[TPl6]
Meter=IMAGE
SolidColor=0,0,0,1
W=21
H=19
X=-16r
Y=1r
Group=Pl1
Hidden=1
MouseOverAction=[!SetOption Jump- FontEffectColor #Color1#,80][!SetOption PlayerTTip Text "Jump Back"][!ShowMeter PlayerTTip][!Redraw]
MouseLeaveAction=[!SetOption Jump- FontEffectColor 0,0,0,80][!HideMeter PlayerTTip][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "SetPosition -5"]

[Jump+]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=16
StringAlign=Center
FontFace=Webdings
X=41r
Y=10r
Text="8"
Angle=0.3
Group=Pl1
Hidden=1

[TPl7]
Meter=IMAGE
SolidColor=0,0,0,1
W=21
H=19
X=-14r
Y=1r
Group=Pl1
Hidden=1
MouseOverAction=[!SetOption Jump+ FontEffectColor #Color1#,80][!SetOption PlayerTTip Text "Jump Forward"][!ShowMeter PlayerTTip][!Redraw]
MouseLeaveAction=[!SetOption Jump+ FontEffectColor 0,0,0,80][!HideMeter PlayerTTip][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "SetPosition +5"]

[RepeatT]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=10
StringAlign=Left
X=13r
Y=-271r
Text="_Repeat"
Angle=0.83
Hidden=1
AntiAlias=1

[ShuffleT]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,80
StringEffect=BORDER
FontSize=10
StringAlign=Left
X=r
Y=r
Text="_Shuffle"
Angle=0.83
Hidden=1
AntiAlias=1

[DimRepeat]
Meter=IMAGE
ImageName=#@#Images\files\dim\0.png
ImageTint=[CalcRepeat]
X=-18r
Y=12r
DynamicVariables=1
Group=Pl1
Hidden=1
MouseOverAction=[!ShowMeter RepeatT][!Redraw]
MouseLeaveAction=[!HideMeter RepeatT][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "SetRepeat -1"]

[DimShuffle]
Meter=IMAGE
ImageName=#@#Images\files\dim\0.png
ImageTint=[CalcShuffle]
X=-12r
Y=15r
DynamicVariables=1
Group=Pl1
Hidden=1
MouseOverAction=[!ShowMeter ShuffleT][!Redraw]
MouseLeaveAction=[!HideMeter ShuffleT][!Redraw]
LeftMouseDownAction=[!CommandMeasure PlayerSet "SetShuffle -1"]

;=======Ram
[bg02a]
Meter=Image
ImageName=#@#Images\files\bg02r.png
ImageTint=#color3#,255
x=1040
y=625


;====Net=====
[NetBase]
Meter=Image
ImageName=#@#Images\files\bg02c.png
ImageTint=#color2#,255
x=342
y=625

[MeasureNetIn]
Measure=NetIn
AverageSize=5

[MeasureNetOut]
Measure=NetOut
AverageSize=5

[MeasureSSID]
Measure=Plugin
Plugin=WiFiStatus
WiFiInfoType=SSID
WiFiIntfID=0
UpdateDivider=100

[NetName]
Meter=String
MeterStyle=TextStyle3
MeasureName=MeasureSSID
FontColor=#color1#
w=145
Clipstring=1
Text=%1
StringAlign=center
FontSize=14
x=683
y=695

[NIn]
Meter=String
MeterStyle=TextStyle3
StringAlign=Right
FontColor=#color1#
FontSize=12
x=620
y=640
Text=_Net-In

[NOut]
Meter=String
MeterStyle=TextStyle3
StringAlign=left
FontColor=#color1#
FontSize=12
x=745
y=640
Text=Net-Out_

[InSpeed]
Meter=String
MeterStyle=TextStyle3
MeasureName=MeasureNetIn
StringAlign=Right
FontColor=#color1#
Text=%1b
AutoScale=1
FontSize=12
x=595
y=668

[OutSpeed]
Meter=String
MeterStyle=TextStyle3
MeasureName=MeasureNetOut
FontColor=#color1#
StringAlign=Left
Text=%1b
FontSize=12
AutoScale=1
x=770
y=668

;=============CPU|System==========
[hudcpu]
Meter=Image
ImageName=#@#Images\hud1.png
ImageTint=#color2#,240
x=260

[Power1]
Meter=Image
ImageName=#@#Images\power1.png
Imagetint=#color1#
LeftMouseDownAction=[!ShowMeterGroup notes][!Writekeyvalue variables N1 none][!Writekeyvalue variables N2 main][!HideMeter Power1][!ShowMeter Power1a][!Writekeyvalue variables notegroup "notes | Main"]
MouseOverAction=[!SetOption Power1 Imagetint "#Color3#"][!SetOption SysTTip Text "Show Notes"][!ShowMeter SysTTip]
MouseLeaveAction=[!SetOption Power1 Imagetint "#Color1#"][!HideMeter SysTTip]
MouseActionCursorName=Cross
x=684
y=20
Group=#N1#
Hidden=1

[Power1a]
Meter=Image
ImageName=#@#Images\power1.png
ImageTint=#color2#
LeftMouseDownAction=[!HideMeterGroup notes][!Writekeyvalue variables N1 main][!Writekeyvalue variables N2 none][!HideMeter Power1a][!ShowMeter Power1][!Writekeyvalue variables notegroup "notes"]
MouseOverAction=[!SetOption Power1a Imagetint "#Color3#"][!SetOption SysTTip Text "Hide Notes"][!ShowMeter SysTTip]
MouseLeaveAction=[!SetOption Power1a Imagetint "#Color2#"][!HideMeter SysTTip]4
MouseActionCursorName=Cross
x=r
y=r
Group=#N2#
Hidden=1

[Power2]
Meter=Image
ImageName=#@#Images\power2.png
x=-40r
y=r
MouseActionCursorName=Cross

[Power2a]
Meter=Image
ImageName=#@#Images\power2.png
x=r
y=r
MouseActionCursorName=Cross
Hidden=1

[Power3]
Meter=Image
ImageName=#@#Images\power3.png
MouseOverAction=[!SetOption Power3 ImageTint "#color3#,220"]
MouseLeaveAction=[!SetOption Power3 ImageTint "#color1#,240"]
LeftMouseDownAction=[!ToggleMeterGroup power]
MouseActionCursorName=Cross
x=8r
y=42r

[Power3a]
Meter=Image
ImageName=#@#Images\power3.png
x=r
y=r
Hidden=1
MouseActionCursorName=Cross


[PowerC]
Meter=Image
ImageName=#@#Images\powerc.png
ImageTint=#color1#
SolidColor=0,0,0,1
x=21r
y=-19r
MouseOverAction=[!SetOption PowerC Imagetint "#Color3#"][!SetOption SysTTip Text "Open Player"][!ShowMeter SysTTip]
MouseLeaveAction=[!SetOption PowerC Imagetint "#Color1#"][!HideMeter SysTTip]
LeftMouseDownAction=[!CommandMeasure PlayerSet "OpenPlayer"]
MouseActionCursorName=Cross

[PowerCa]
Meter=Image
ImageName=#@#Images\powerc.png
ImageTint=220,160,0
SolidColor=0,0,0,1
x=r
y=r
MouseOverAction=[!SetOption PowerCa Imagetint "#Color3#"][!SetOption SysTTip Text " Left Mouse_ Close Player#CRLF# Right Mouse_ Player to Top"][!ShowMeter SysTTip]
MouseLeaveAction=[!SetOption PowerCa Imagetint "220,160,0"][!HideMeter SysTTip]
LeftMouseDownAction=[!CommandMeasure PlayerSet "ClosePlayer"]
RightMouseDownAction=[!CommandMeasure PlayerSet "OpenPlayer"]
MouseActionCursorName=Cross

[SysTTip]
Meter=String
MeterStyle=TextStyle3
FontEffectColor=0,0,0,160
StringEffect=Border
FontSize=15
StringAlign=Rightbottom
X=1300
Y=690
H=60
Text="System Tips"
AntiAlias=1
InlineSetting=Size | 12
InlinePattern=( .*_)
Hidden=1
;---
[MeasureCPUName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
Substitute="  ":""
UpdateDivider=-1

[MeasureCPUSpeed]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=~MHz
UpdateDivider=-1

[MeasureCPU]
Measure=CPU

[CPUStat]
Meter=String
MeasureName=MeasureCPU
MeterStyle=TextStyle3
FontSize=15
x=750
y=15
Text=CPU Usage: %1%
AntiAlias=1

[CPUName]
Meter=String
MeasureName=MeasureCPUName
MeterStyle=TextStyle3
StringAlign=Left
FontSize=13
x=r
y=-4R
Text=%1
AntiAlias=1

[CPUSpeed]
Meter=String
MeasureName=MeasureCPUSpeed
MeterStyle=TextStyle3
FontSize=13
x=r
y=-4R
Text=Max CPU: %1 MHz
AntiAlias=1

;--------
[MeasureRamTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=-1

[MeasureRamUsage]
Measure=PhysicalMemory
UpdateDivider=20

[RamPercent]
Meter=String
MeasureName=MeasureRamUsage
MeterStyle=TextStyle3
StringAlign=right
MaxValue=[MeasureRamTotal]
FontSize=15
Percentual=1
x=620
y=15
Text=RAM Usage : %1%
AntiAlias=1

[RamTotal]
Meter=String
MeasureName=MeasureRamTotal
MeterStyle=TextStyle3
StringAlign=Right
FontSize=13
x=r
y=-4R
Text=Total RAM: %1B
AutoScale=1
AntiAlias=1

[RamUsed]
Meter=String
MeasureName=MeasureRamUsage
MeterStyle=TextStyle3
StringAlign=Right
FontSize=13
x=r
y=-4R
Text=Used RAM: %1B
AutoScale=1
AntiAlias=1

;----------
[B1]
Meter=Image
ImageName=#@#Images\files\bg02a.png
ImageTint=#color3#
x=1180
y=10

;===============Notes
[MeasureNotes]
Measure=Plugin
Plugin=Plugins\QuotePlugin.dll
PathName=#@#\notes.txt
UpdateDivider=100
Separator=¶

[NotesBg]
Meter=Image
ImageName=#@#Images\case1.png
ImageTint=#color2#,240
x=1050
y=150
Hidden=1
Group=#notegroup#

[notestext]
meter=string
MeterStyle=NoteText
Measurename=measurenotes
x=15r
y=18r
w=200
h=200
fontsize=7
clipstring=1
leftmousedownaction=!execute ["#@#\notes.txt"][!Redraw]
Hidden=1
Group=#notegroup#

;====VolBar
[Insignia]
Meter=Image
ImageName=#@#Images\#Insignia#.png
ImageTint=#color1#,225
w=55
h=55
x=1292
y=48

[MeasureWin7Audio]
Measure=Plugin
Plugin=Win7AudioPlugin

[MeterVolBack]
Meter=Image
ImageTint=0,0,0,230
imagename=#@#Images\#Saber#.png
x=1290
y=125
Antialias=1

[MeterPositionM]
Meter=Bar
MeasureName=MeasureWin7Audio
BarImage=#@#Images\#Saber#.png
X=r
y=r
Antialias=1

[MVolume0]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=500r
W=75
H=15
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 0"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 0%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume5]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 5"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 5%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume10]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 10"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 10%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume15]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 15"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 15%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume20]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 20"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 20%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume25]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 25"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 25%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume30]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 30"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 30%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume35]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 35"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 35%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume40]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 40"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 40%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume45]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 45"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 45%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume50]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 50"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 50%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume55]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 55"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 55%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume60]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 60"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 60%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume65]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 65"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 65%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume70]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 70"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 70%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume75]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 75"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 75%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume80]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 80"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 80%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume85]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 85"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 85%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume90]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 90"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 90%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume95]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 95"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 95%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

[MVolume100]
Meter=IMAGE
SolidColor=0,0,0,1
X=r
Y=-25r
W=75
H=25
LeftMouseUpAction=[!CommandMeasure MeasureWin7Audio "SetVolume 100"]
group=#volgroup#
Hidden=1
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 100%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]

;======================Power Controls
[TransLc01]
Meter=IMAGE
SolidColor=#color3#,120
X=638
Y=620
W=92
H=30
MouseOverAction=[!SetOption TransLc01 SolidColor #color3#,220]
MouseLeaveAction=[!SetOption TransLc01 SolidColor #color3#,120]
LeftMouseDownAction=[PLAY #@#03.WAV][!ActivateConfig "Cybertronians\Additions" "ConfirmLock.ini"]
Group=power

[Lock]
Meter=String
MeterStyle=TextStyle1
StringEffect=BORDER
FontSize=18
StringAlign=center
X=684
Y=619
Text=LOCK
Group=power

[TransSd01]
Meter=IMAGE
SolidColor=#color3#,120
X=725
Y=589
W=105
H=30
MouseOverAction=[!SetOption TransSd01 SolidColor #color3#,220]
MouseLeaveAction=[!SetOption TransSd01 SolidColor #color3#,120]
LeftMouseDownAction=[PLAY #@#03.WAV][!ActivateConfig "Cybertronians\Additions" "ConfirmShutdown.ini"]
Group=power

[Shutdown]
Meter=String
MeterStyle=TextStyle1
StringEffect=BORDER
FontSize=15
StringAlign=Left
X=725
Y=589
Text="SHUTDOWN"
Group=power

[TransHn01]
Meter=IMAGE
SolidColor=#color3#,120
X=540
Y=589
W=105
H=30
MouseOverAction=[!SetOption TransHn01 SolidColor #color3#,220]
MouseLeaveAction=[!SetOption TransHn01 SolidColor #color3#,120]
LeftMouseDownAction=[PLAY #@#03.WAV][!ActivateConfig "Cybertronians\Additions" "ConfirmHibernate.ini"]
Group=power

[Hibernate]
Meter=String
MeterStyle=TextStyle1
StringEffect=BORDER
FontSize=15
StringAlign=Right
X=646
Y=589
Text="HIBERNATE"
Group=power

[TransRs01]
Meter=IMAGE
SolidColor=#color3#,120
X=815
Y=558
W=100
H=30
MouseOverAction=[!SetOption TransRs01 SolidColor #color3#,220]
MouseLeaveAction=[!SetOption TransRs01 SolidColor #color3#,120]
LeftMouseDownAction=[PLAY #@#03.WAV][!ActivateConfig "Cybertronians\Additions" "ConfirmRestart.ini"]
Group=power

[Restart]
Meter=String
MeterStyle=TextStyle1
StringEffect=BORDER
FontSize=15
StringAlign=Left
X=820
Y=558
Text="RESTART"
Group=power

[TransRef01]
Meter=IMAGE
SolidColor=#color3#,120
X=455
Y=558
W=100
H=30
MouseOverAction=[!SetOption TransRef01 SolidColor #color3#,220]
MouseLeaveAction=[!SetOption TransRef01 SolidColor #color3#,120]
LeftMouseDownAction=[!RainmeterRefresh]
Group=power

[Refresh]
Meter=String
MeterStyle=TextStyle1
StringEffect=BORDER
FontSize=16
StringAlign=Right
X=550
Y=558
Text="REFRESH"
Group=power

;============================HardDisk==================
[MeasureHDD1]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive1#
UpdateDivider=20

[MeasureTotalHDD1]
Measure=FreeDiskSpace
Total=1
Drive=#Drive1#
UpdateDivider=-1

[DriveLetter1]
Meter=image
ImageName=#@#Images\drive.png
SolidColor=0,0,0,1
LeftMouseDownAction=!Execute ["#Drive1#"][!Redraw]
MouseOverAction=[!ShowMeterGroup HD1]
MouseLeaveAction=[!HideMeterGroup HD1]
x=160
y=440
group=#drivegroup#
Hidden=1

[Hdd1In]
Meter=Image
ImageName=#@#Images\files\main04.png
x=22r
y=42r
Group=HD1
Hidden=1

[Hdd1On]
Meter=IMAGE
ImageName=#@#Images\files\dim\0.png
ImageTint=#Color3#,255
X=-1r
Y=-22r
Group=#drivegroup#
Hidden=1

[Diskname1]
Meter=STRING
Text=#Drive1Name#
MeterStyle=TextStyle3
FontSize=13
X=44r
Y=17r
Group=HD1
Hidden=1

[UsageDisk1]
MeasureName=MeasureHDD1
Meter=STRING
MeterStyle=TextStyle3
StringAlign=Right
FontSize=12
X=50r
Y=20r
AutoScale=1
Text=%1B
Group=HD1
Hidden=1

[TotalDisk1]
MeasureName=MeasureTotalHDD1
Meter=STRING
MeterStyle=TextStyle3
FontSize=12
X=10r
Y=r
AutoScale=1
Text=%1B
Group=HD1
Hidden=1
;---------------
[MeasureHDD2]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive2#
UpdateDivider=2

[MeasureTotalHDD2]
Measure=FreeDiskSpace
Total=1
Drive=#Drive2#
UpdateDivider=-1

[DriveLetter2]
Meter=image
ImageName=#@#Images\drive.png
SolidColor=0,0,0,1
LeftMouseDownAction=!Execute ["#Drive2#"][!Redraw]
MouseOverAction=[!ShowMeterGroup HD2]
MouseLeaveAction=[!HideMeterGroup HD2]
x=-125r
y=10r
group=#drivegroup#
Hidden=1

[Hdd2In]
Meter=Image
ImageName=#@#Images\files\main04.png
x=22r
y=42r
Group=HD2
Hidden=1

[Hdd2On]
Meter=IMAGE
ImageName=#@#Images\files\dim\0.png
ImageTint=#Color3#,255
X=-1r
Y=-22r
Group=#drivegroup#
Hidden=1

[Diskname2]
Meter=STRING
Text=#Drive2Name#
MeterStyle=TextStyle3
FontSize=13
X=44r
Y=17r
Group=HD2
Hidden=1

[UsageDisk2]
MeasureName=MeasureHDD2
Meter=STRING
MeterStyle=TextStyle3
StringAlign=Right
FontSize=12
X=50r
Y=20r
AutoScale=1
Text=%1B
Group=HD2
Hidden=1

[TotalDisk2]
MeasureName=MeasureTotalHDD2
Meter=STRING
MeterStyle=TextStyle3
FontSize=12
X=10r
Y=r
AutoScale=1
Text=%1B
Group=HD2
Hidden=1
;---------------
[MeasureHDD3]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive3#
UpdateDivider=2

[MeasureTotalHDD3]
Measure=FreeDiskSpace
Total=1
Drive=#Drive3#
UpdateDivider=-1

[DriveLetter3]
Meter=image
ImageName=#@#Images\drive.png
SolidColor=0,0,0,1
LeftMouseDownAction=!Execute ["#Drive3#"][!Redraw]
MouseOverAction=[!ShowMeterGroup HD3]
MouseLeaveAction=[!HideMeterGroup HD3]
x=-125r
y=10r
group=#drivegroup#
Hidden=1

[Hdd3In]
Meter=Image
ImageName=#@#Images\files\main04.png
x=22r
y=42r
Group=HD3
Hidden=1

[Hdd3On]
Meter=IMAGE
ImageName=#@#Images\files\dim\0.png
ImageTint=#Color3#,255
X=-1r
Y=-22r
Group=#drivegroup#
Hidden=1

[Diskname3]
Meter=STRING
Text=#Drive3Name#
MeterStyle=TextStyle3
FontSize=13
X=44r
Y=17r
Group=HD3
Hidden=1

[UsageDisk3]
MeasureName=MeasureHDD3
Meter=STRING
MeterStyle=TextStyle3
StringAlign=Right
FontSize=12
X=50r
Y=20r
AutoScale=1
Text=%1B
Group=HD3
Hidden=1

[TotalDisk3]
MeasureName=MeasureTotalHDD3
Meter=STRING
MeterStyle=TextStyle3
FontSize=12
X=10r
Y=r
AutoScale=1
Text=%1B
Group=HD3
Hidden=1
;------
[DriveToggle]
meter=Button
ImageTint=#Color1#
Buttonimage=#@#\Images\button.png
x=-25r
y=25r
MouseOverAction=[PLAY #@#01.WAV]
LeftMouseUpAction=[!ShowMeterGroup drives][!Writekeyvalue variables D1 none][!Writekeyvalue variables D2 "main"][!HideMeter DriveToggle][!ShowMeter DriveToggle2][!Writekeyvalue variables drivegroup "drives | Main"]
Hidden=1
Group=#D1#

[DriveToggle2]
meter=Button
ImageTint=#color1#
Buttonimage=#@#\Images\button.png
x=r
y=r
MouseOverAction=[PLAY #@#01.WAV]
LeftMouseUpAction=[!HideMeterGroup drives][!Writekeyvalue variables D1 main][!Writekeyvalue variables D2 "none"][!HideMeter DriveToggle2][!ShowMeter DriveToggle][!Writekeyvalue variables drivegroup "drives"]
Hidden=1
Group=#D2#