[variables]
TTtextcolor=10,10,10
TTbordercolor=255,255,255,50
ttbgcolor=255,255,255
ttbg2color=240,240,240
ttblur=0
menustyle=dark
sidebarcolor=30,30,30
BGOpacity=255
idiottrianglecolor=26,160,225
galleryW=885
galleryH=520
color1=245,100,44
color2=229,75,88
color3=140,191,38
color4=16,119,209
color5=0,171,169 
color6=20,150,220
color7=133,100,179
color8=235,235,235
color9=117,117,117
color10=50,50,50
lighttextcolor=100,100,100
darktextcolor=50,50,50

[BackgroundStyle]
Meter=Image
solidcolor=245,245,245,200
W=(321*#ScaleDpi#)
h=((#galleryH#*#ScaleDpi#)-4*#ScaleDpi#)
y=1






[Background2Style]
Meter=Image
solidcolor=#ttbgcolor#
W=((#galleryW#-320)*#ScaleDpi#)
h=((#galleryH#*#ScaleDpi#)-4*#ScaleDpi#)
y=(1*#ScaleDpi#)
x=(321*#ScaleDpi#)



[Border2B]
Meter=Shape
Shape=Rectangle 0,0,(#galleryW#*#ScaleDpi#)-(2*#ScaleDpi#),(#galleryH#*#ScaleDpi#)-(2*#ScaleDpi#) | Fill Color 0,0,0,0 | StrokeWidth (1*#ScaleDpi#) | Stroke Color #colorskin#
X=0
Y=0





[OverlayStyle]
ImageName=#@#\Graphics\Gallery\overlay.png
ScaleMargins=2,2,2,2
W=660
h=275

[addstyle]
ImageName=#@#\Graphics\Gallery\arrow.png
X=22
Y=232
ImageTint=#tttextcolor#



[add0style]
ImageName=#@#\Graphics\Gallery\arrow.png
ImageFlip=HORIZONTAL
X=-1R
Y=232
ImageTint=#tttextcolor#

[1Style]
W=35
SolidColor=#colorskin#
X=22
Y=20
H=35

[1StyleT]
SolidColor=#colorskin#
X=22
Y=20
W=60
H=60

[1winStyle]
X=22
Y=20

[emptygridstyle]
ImageName=#@#\Graphics\Gallery\emptygrid.png
X=175
Y=20
ImageTint=80,80,80


[GrdStyle]
ImageName=#@#\Graphics\Gallery\PanelGridWhite.png
X=22
Y=20
ImageAlpha=200

[Grd4Style]
ImageName=#@#\Graphics\Gallery\PanelGridColor.png
X=22
Y=20
ImageAlpha=200




[close]
Meter=Image
SolidColor=0,0,0,1
ImageName=#@#\Graphics\Gallery\closelight.png
W=(50*#ScaleDpi#)
h=(32*#ScaleDpi#)
AntiAlias=1
X=((#galleryW#*#ScaleDpi#) -(50*#ScaleDpi#))
Y=1
MouseActionCursor=0
LeftMouseUpAction=[!DeactivateConfig]
MouseOverAction=[!SetOption #CURRENTSECTION# solidcolor 235,17,35][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# solidcolor 0,0,0,0][!Update]


[help]
Meter=Image
SolidColor=0,0,0,1
ImageName=#@#\Graphics\Gallery\helplight.png
W=(50*#ScaleDpi#)
h=(32*#ScaleDpi#)
AntiAlias=1
X=((#galleryW#*#ScaleDpi#) -(50*#ScaleDpi#)-(50*#ScaleDpi#))
Y=1
MouseActionCursor=0
LeftMouseUpAction=["#@#Common\OmnimoApp.exe" Browser "#@#Readme\Readme.html?&theme=#ttgallerystyle#&lang=#langcode#" #scaledpi#][#EditManually#"http://omnimo.info/readme.html?&theme=#ttgallerystyle#&lang=#langcode#"]
LeftMouseDoubleClickAction=["#@#Readme\Readme.html"]
MouseOverAction=[!SetOption #CURRENTSECTION# solidcolor #colorskin#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# solidcolor 0,0,0,0][!Update]










[CategoryList]

H=(46*#ScaleDpi#)
W=(320*#ScaleDpi#)
X=(#ScaleDpi#)
Y=(48*#ScaleDpi#)r
DynamicVariables=1
LeftMouseUpAction=[!HideMeterGroup Bye][!ShowMeterGroup #CURRENTSECTION#][!WriteKeyValue Variables ScrollStart "0" "scroll.inc"][!SetOption #CURRENTSECTION#Bg Y 0][!WriteKeyValue Variables LastCat #CURRENTSECTION# "scroll.inc"][!Refresh]
MouseActionCursor=0
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor 0,0,0,30][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!UpdateMeter #CURRENTSECTION#][!Redraw]
FontFace=#FontTypeWP#
FontSize=(11*#ScaleDpi#)
StringAlign=LeftCenter
fontcolor=#TTtextcolor#
AntiAlias=1



[CatIcon]
X=r
Y=(48*#ScaleDpi#)r
w=(50*#ScaleDpi#)
h=(50*#ScaleDpi#)

imagetint=#TTtextcolor#

[CatHeaderTitle]
FontFace=#FontFaceLight#
FontSize=(20*#ScaleDpi#)
StringAlign=LeftCenter
fontcolor=#TTtextcolor#
AntiAlias=1
X=(360*#ScaleDpi#)
Y=(60*#ScaleDpi#)
Hidden=1


[CatSubTitle]
FontFace=#FontTypeWP#
FontSize=(12*#ScaleDpi#)
StringAlign=LeftCenter
fontcolor=#TTtextcolor#,200
w=(250*#ScaleDpi#)
AntiAlias=1
X=(360*#ScaleDpi#)
Y=(60*#ScaleDpi#)
Hidden=1
FontEffectColor=100,100,100
[CatIndicator]
H=(24*#ScaleDpi#)
W=(4*#ScaleDpi#)
X=r
Y=((48*#ScaleDpi#))r
DynamicVariables=1
MouseActionCursor=0
Hidden=1
SolidColor=#colorskin#


[WebShortcut]
Hidden=1
Y=r
X=(49*#ScaleDpi#)r
w=(48*#ScaleDpi#)
h=(48*#ScaleDpi#)
SolidColor=#colorskin# 
AntiAlias=1
LeftMouseUpAction=!ToggleConfig "WP7\Panels\#Shortcuts\#CURRENTSECTION#" "Item.ini"
ToolTipText=#CURRENTSECTION#
Group=cat2 | Bye


[P]
LeftMouseUpAction=!ToggleConfig "WP7\DonatorPanels\#CURRENTSECTION#" "Item.ini"

[EssentialPanel]
Hidden=1
Y=r
X=(61*#ScaleDpi#)r
w=(60*#ScaleDpi#)
h=(60*#ScaleDpi#)
solidcolor=#colorskin# 
AntiAlias=1
Text=#CURRENTSECTION#
fontcolor=#textcolor2#,150
fontsize=(7*#ScaleDpi#)
LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CURRENTSECTION#" "Item.ini"
ToolTipText=#CURRENTSECTION#
ClipString=1
Group=cat1 | Bye

[EssentialPanelText]
Hidden=1
Y=r
X=(61*#ScaleDpi#)r
w=(60*#ScaleDpi#)
h=(60*#ScaleDpi#)
solidcolor=80,80,80
AntiAlias=1
Text=#CURRENTSECTION#
fontcolor=255,255,255,200
fontsize=(9*#ScaleDpi#)
LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CURRENTSECTION#" "Item.ini"
ToolTipText=#CURRENTSECTION#
ClipString=1
Group=cat3 | Bye


[EssentialPanelBlank]
Hidden=1
Y=r
X=(61*#ScaleDpi#)r
w=(60*#ScaleDpi#)
h=(60*#ScaleDpi#)
solidcolor=200,200,200
AntiAlias=1
Group=cat4 | Bye



[LargeTextItem]
Hidden=1
Y=r
X=(122*#ScaleDpi#)r
w=(121*#ScaleDpi#)
h=(80*#ScaleDpi#)
Group=cat3 | Bye
AntiAlias=1
LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CURRENTSECTION#" "Item.ini"





[OpacitySlider]
Hidden=1
Y=r
X=(41*#ScaleDpi#)r
w=(41*#ScaleDpi#)
h=(22*#ScaleDpi#)
SolidColor=0,0,0,#CURRENTSECTION#
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables opacity #CURRENTSECTION# "#@#Common\Color\color.inc"][!RefreshGroup "Panel"]
RightMouseUpAction=[!WriteKeyValue Variables opacity2 #CURRENTSECTION# "#@#Common\Color\color.inc"][!RefreshGroup "Panel"]
Group=Cat6 | Bye

ToolTipTitle=#TransparencyLevel#: #CURRENTSECTION#
ToolTipText=#LeftClickOpacity##CRLF##RightClickOpacity#


[ColorBlock]
Hidden=1
Y=r
X=(49*#ScaleDpi#)r
w=(48*#ScaleDpi#)
h=(48*#ScaleDpi#)
ToolTipText=#LeftClickColor##CRLF##RightClickColor#
Group=Cat6 | Bye