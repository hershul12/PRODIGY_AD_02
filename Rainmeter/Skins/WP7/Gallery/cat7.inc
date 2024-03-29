


[solide]
meter=string
w=(200)*#scaledpi#
h=(80)*#scaledpi#
x=(350)*#scaledpi#
y=(70)*#scaledpi#
solidcolor=0,0,0,1
MouseOverAction=[!ShowMeter SecretSetting][!Redraw]
MouseLeaveAction=[!HideMeter SecretSetting][!Redraw]






[cat7Bg]
Meter=Image
SolidColor=0,255,0,1
W=(#galleryW#-320)*#ScaleDpi#
h=(950*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=0
Group=cat7 | Bye
DynamicVariables=1
Hidden=1
[cat7BgBottom]
Meter=Image
SolidColor=0,255,0,50
W=(#galleryW#-320)
h=(700*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=R
Group=cat7 | Bye
DynamicVariables=1
Hidden=1
[cat7Title]
Meter=String
Text="#UnitsDisplayandFonts#"
Group=cat7 | Bye
MeterStyle=CatHeaderTitle
Y=(-1600*#ScaleDpi#)R
[cat7Subtitle1]
Meter=String
Text=" #UseCelsius24#"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=R
[Metric1]
Meter=Image
solidcolor=#colorskin#
w=(50*#ScaleDpi#)
h=(25*#ScaleDpi#)
x=(360*#ScaleDpi#)
y=R
Group=Cat7 | Bye
[Metric2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##metric##ttgallerystyle#.png
Group=Cat7 | Bye
x=(360*#ScaleDpi#)
y=(-25*#ScaleDpi#)R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables Units e "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables Language "en-US" "#@#Common\Weather\WeatherComVariables.inc"][!WriteKeyValue Variables metric 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables DisplayAMPM 0 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables TimeFormat "%I:%M" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables ampmextra "%p" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Unit5 i "#ROOTCONFIGPATH#Panels\Weather\UserVariables.inc"][!WriteKeyValue Variables Unit f "#ROOTCONFIGPATH#Panels\Weather\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup Time][!RefreshGroup Weather]

[Metric3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##metric##ttgallerystyle#.png
Group=Cat7 | Bye
x=(360*#ScaleDpi#)
y=R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables Units m "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables Language "en-GB" "#@#Common\Weather\WeatherComVariables.inc"][!WriteKeyValue Variables metric 1 "#@#Common\Color\color.inc"][!WriteKeyValue Variables DisplayAMPM 1 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables TimeFormat %H:%M "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables ampmextra "0" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Unit5 m "#ROOTCONFIGPATH#Panels\Weather\UserVariables.inc"][!WriteKeyValue Variables Unit c "#ROOTCONFIGPATH#Panels\Weather\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup Time][!RefreshGroup Weather]

[cat7Subtitle2]
Meter=String
Text=" #LanguageText#"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R
[Cat7Subtitle9]
Meter=String
Text="  English"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=(10*#ScaleDpi#)R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language en-US "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage English "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language English "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language English "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1
[Cat7Subtitle10]
Meter=String
Text="  Deutsch"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language de-DE "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage German "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language German "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language German "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle11]
Meter=String
Text="  Español"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language es-ES "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage Spanish "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Spanish "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Spanish "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle12]
Meter=String
Text="  Pусский "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language ru-RU "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage Russian "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Russian "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Russian "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1


[Cat7Subtitle13]
Meter=String
Text="  Nederlands "
Group=Cat7 | Bye
MeterStyle=CatSubTitle



Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language nl-NL "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage Dutch "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Dutch "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Dutch "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle14]
Meter=String
Text="  Français "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=(10*#ScaleDpi#)R
X=(360*#ScaleDpi#)
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language fr-FR "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage French "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language French "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language French "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1



[Cat7Subtitle15]
Meter=String
Text="  Português "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language pt-PT "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage Portuguese "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Portuguese "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Portuguese "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle16]
Meter=String
Text="  Turkish "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Language tr-TR "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables MainLanguage Turkish "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language English "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language English "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]



MouseActionCursor=1

[Cat7Subtitle17]
Meter=String
Text="  [Help Translate] "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=["https://poeditor.com/join/project/upp0dfbsjj"]
MouseActionCursor=1
ToolTipTitle=Help Translate
ToolTipText=If you help us translate Omnimo to a new language, we'll give you the Contributor Pack :)
ToolTipWidth=180
[cat7Subtitle3]
Meter=String
Text=" #WeatherCode#"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R




[WeatherCode1]
Measure=Plugin
Plugin=InputText
SolidColor=255,255,255
SolidColor=240,240,240
FontColor=0,0,0
FontSize=(10*#ScaleDpi#)
FontFace=Seqoe UI
StringStyle=Italic
FontSize=#FontSize#
stringalign=center
x=(365*#ScaleDpi#)
y=(280*#ScaleDpi#)
W=(100*#ScaleDpi#)
H=(30*#ScaleDpi#)
FocusDismiss=1
Command1=[!WriteKeyValue Variables Latitude $UserInput$ "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#]
DefaultValue=#Latitude#
DynamicVariables=1
Group=Cat7 | Bye

[WeatherCode2]
Meter=String
x=(365*#ScaleDpi#)
y=(280*#ScaleDpi#)
W=(100*#ScaleDpi#)
H=(30*#ScaleDpi#)
Group=cat7 | Bye
StringAlign=left
SolidColor=220,220,220
FontColor=0,0,0
fontsize=(10*#ScaleDpi#)
FontFace=#FontTypeWP#
Antialias=1
Text=#Latitude#
LeftMouseUpAction=!CommandMeasure "WeatherCode1" "ExecuteBatch 1"
Group=Cat7 | Bye
Hidden=1


[WeatherCode3]
Measure=Plugin
Plugin=InputText
SolidColor=255,255,255
SolidColor=240,240,240
FontColor=0,0,0
FontSize=(10*#ScaleDpi#)
FontFace=Seqoe UI
StringStyle=Italic
FontSize=#FontSize#
stringalign=center
x=(466*#ScaleDpi#)
y=(280*#ScaleDpi#)
W=(100*#ScaleDpi#)
H=(30*#ScaleDpi#)
FocusDismiss=1
Command1=[!WriteKeyValue Variables Longitude $UserInput$ "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#]
DefaultValue=#Longitude#
DynamicVariables=1
Group=Cat7 | Bye

[WeatherCode4]
Meter=String
x=(466*#ScaleDpi#)
y=(280*#ScaleDpi#)
W=(100*#ScaleDpi#)
H=(30*#ScaleDpi#)
Group=cat7 | Bye
StringAlign=left
SolidColor=220,220,220
FontColor=0,0,0
fontsize=(10*#ScaleDpi#)
FontFace=#FontTypeWP#
Antialias=1
Text=#Longitude#
LeftMouseUpAction=!CommandMeasure "WeatherCode3" "ExecuteBatch 1"
Group=Cat7 | Bye
Hidden=1




[Cat7Subtitle4]
Meter=String
Text="  #HowToFindWeather#"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=(15*#ScaleDpi#)R
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=["https://www.latlong.net/"]
MouseActionCursor=1
[cat7Subtitle5]
Meter=String
Text=" #DPIScalingText#"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R

[scaleD]
w=(60*#ScaleDpi#)
X=1R
w=(10*#ScaleDpi#)

stringalign=centercenter
SolidColor=220,220,220
Text="#currentsection#%"
fontsize=(10*#ScaleDpi#)

[75]
Meter=String
MeterStyle=WebShortcut | scaleD
Group=Cat7 | Bye
x=(395*#ScaleDpi#)
Y=(30*#ScaleDpi#)R
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 0.75 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]

[100]
Meter=String
MeterStyle=WebShortcut | scaleD
Group=Cat7 | Bye
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 1 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]

[125]
Meter=String
MeterStyle=WebShortcut | scaleD
Group=Cat7 | Bye
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 1.25 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]

[150]
Meter=String
MeterStyle=WebShortcut | scaleD
Group=Cat7 | Bye
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 1.50 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]

[175]
Meter=String
MeterStyle=WebShortcut | scaleD
Group=Cat7 | Bye
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 1.75 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]


[200]
Meter=String
MeterStyle=WebShortcut | scaleD
Group=Cat7 | Bye
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 2 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]

[225]
Meter=String
MeterStyle=WebShortcut | scaleD
Group=Cat7 | Bye
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 2.25 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]



[Cat7Subtitle7]
Meter=String
Text="  #ChangeFontStyles#"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=5R
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=!ToggleConfig "wp7\Gallery\Color\TT" "font.ini"
MouseActionCursor=1

@Include7=#@#Common\Weather\WeatherComVariables.inc



[SecretSetting]
Meter=String
Text=" F° / 24h"
MeterStyle=CatSubTitle
x=(475)*#scaledpi#
y=(120)*#scaledpi#
MouseActionCursor=1
Hidden=1
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables Units e "#@#Common\Weather\WeatherComJSONVariables.inc"][!WriteKeyValue Variables Language "en-US" "#@#Common\Weather\WeatherComVariables.inc"][!WriteKeyValue Variables metric 1 "#@#Common\Color\color.inc"][!WriteKeyValue Variables DisplayAMPM 1 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables TimeFormat "%H:%M" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables ampmextra "0" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Unit5 i "#ROOTCONFIGPATH#Panels\Weather\UserVariables.inc"][!WriteKeyValue Variables Unit f "#ROOTCONFIGPATH#Panels\Weather\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup Time][!RefreshGroup Weather]
