// ==WindhawkMod==
// @id              windows-11-start-menu-styler
// @name            Windows 11 Start Menu Styler
// @description     Customize the start menu with themes contributed by others or create your own
// @version         1.3.1
// @author          m417z
// @github          https://github.com/m417z
// @twitter         https://twitter.com/m417z
// @homepage        https://m417z.com/
// @include         StartMenuExperienceHost.exe
// @include         SearchHost.exe
// @include         SearchApp.exe
// @architecture    x86-64
// @compilerOptions -lcomctl32 -lole32 -loleaut32 -lruntimeobject -Wl,--export-all-symbols
// ==/WindhawkMod==

// Source code is published under The GNU General Public License v3.0.
//
// For bug reports and feature requests, please open an issue here:
// https://github.com/ramensoftware/windhawk-mods/issues
//
// For pull requests, development takes place here:
// https://github.com/m417z/my-windhawk-mods

// ==WindhawkModReadme==
/*
# Windows 11 Start Menu Styler

Customize the start menu with themes contributed by others or create your own.

Also check out the **Windows 11 Taskbar Styler**, **Windows 11 Notification
Center Styler** mods.

## Themes

Themes are collections of styles. The following themes are integrated into the
mod and can be selected in the settings:

[![NoRecommendedSection](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/NoRecommendedSection/screenshot-small.png)
\
NoRecommendedSection](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/NoRecommendedSection/README.md)

[![SideBySide](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/SideBySide/screenshot-small.png)
\
SideBySide](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/SideBySide/README.md)

[![SideBySide2](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/SideBySide2/screenshot-small.png)
\
SideBySide2](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/SideBySide2/README.md)

[![SideBySideMinimal](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/SideBySideMinimal/screenshot-small.png)
\
SideBySideMinimal](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/SideBySideMinimal/README.md)

[![Windows10](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/Windows10/screenshot-small.png)
\
Windows10](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/Windows10/README.md)

[![TranslucentStartMenu](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/TranslucentStartMenu/screenshot-small.png)
\
TranslucentStartMenu](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/TranslucentStartMenu/README.md)

[![Windows11_Metro10](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/Windows11_Metro10/screenshot-small.png)
\
Windows11_Metro10](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/Windows11_Metro10/README.md)

[![Fluent2Inspired](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/Fluent2Inspired/screenshot-small.png)
\
Fluent2Inspired](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/Fluent2Inspired/README.md)

[![RosePine](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/RosePine/screenshot-small.png)
\
RosePine](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/RosePine/README.md)

[![Windows11_Metro10Minimal](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/Windows11_Metro10Minimal/screenshot-small.png)
\
Windows11_Metro10Minimal](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/Windows11_Metro10Minimal/README.md)

[![Everblush](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/Everblush/screenshot-small.png)
\
Everblush](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/Everblush/README.md)

[![21996](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/21996/screenshot-small.png)
\
21996](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/21996/README.md)

[![Down
Aero](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/Down%20Aero/screenshot-small.png)
\
Down
Aero](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/Down%20Aero/README.md)

[![UniMenu](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/UniMenu/screenshot-small.png)
\
UniMenu](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/UniMenu/README.md)

[![LegacyFluent](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/LegacyFluent/screenshot-small.png)
\
LegacyFluent](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/LegacyFluent/README.md)

[![OnlySearch](https://raw.githubusercontent.com/ramensoftware/windows-11-start-menu-styling-guide/main/Themes/OnlySearch/screenshot-small.png)
\
OnlySearch](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/Themes/OnlySearch/README.md)

More themes can be found in the **Themes** section of [The Windows 11 start menu
styling
guide](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/README.md#themes).
Contributions of new themes are welcome!

## Advanced styling

Aside from themes, the settings have two sections: control styles and resource
variables. Control styles allow to override styles, such as size and color, for
the target elements. Resource variables allow to override predefined variables.
For a more detailed explanation and examples, refer to the sections below.

The start menu's XAML resources can help find out which elements and resource
variables can be customized. To the best of my knowledge, there are no public
tools that are able to decode the resource files of recent Windows versions, but
here are XAML resources which were obtained via other means for your
convenience:
[StartResources.xbf](https://gist.github.com/m417z/a7e4e2c7b451ee79c62c51ca2dba7349).

The [UWPSpy](https://ramensoftware.com/uwpspy) tool can be used to inspect the
start menu control elements in real time, and experiment with various styles.

For a collection of commonly requested start menu styling customizations, check
out [The Windows 11 start menu styling
guide](https://github.com/ramensoftware/windows-11-start-menu-styling-guide/blob/main/README.md).

### Control styles

Each entry has a target control and a list of styles.

The target control is written as `Class` or `Class#Name`, i.e. the target
control class name (the tag name in XAML resource files), such as
`StartMenu.StartInnerFrame` or `Rectangle`, optionally followed by `#` and the
target control's name (`x:Name` attribute in XAML resource files). The target
control can also include:
* Child control index, for example: `Class#Name[2]` will only match the relevant
  control that's also the second child among all of its parent's child controls.
* Control properties, for example:
  `Class#Name[Property1=Value1][Property2=Value2]`.
* Parent controls, separated by `>`, for example: `ParentClass#ParentName >
  Class#Name`.
* Visual state group name, for example: `Class#Name@VisualStateGroupName`. It
  can be specified for the target control or for a parent control, but can be
  specified only once per target. The visual state group can be used in styles
  as specified below.

**Note**: The target is evaluated only once. If, for example, the index or the
properties of a control change, the target conditions aren't evaluated again.

Each style is written as `Style=Value`, for example: `Height=5`. The `:=` syntax
can be used to use XAML syntax, for example: `Fill:=<SolidColorBrush
Color="Red"/>`. Specifying an empty value with the XAML syntax will clear the
property value, for example: `Fill:=`. In addition, a visual state can be
specified as following: `Style@VisualState=Value`, in which case the style will
only apply when the visual state group specified in the target matches the
specified visual state.

For the XAML syntax, in addition to the built-in taskbar objects, the mod
provides a built-in blur brush via the `WindhawkBlur` object, which supports the
`BlurAmount`, `TintColor`, and `TintOpacity` properties. For example:
`Fill:=<WindhawkBlur BlurAmount="10" TintColor="#80FF00FF"/>`. Theme resources
are also supported, for example: `Fill:=<WindhawkBlur BlurAmount="18"
TintColor="{ThemeResource SystemAccentColorDark1}" TintOpacity="0.5"/>`.

Targets and styles starting with two slashes (`//`) are ignored. This can be
useful for temporarily disabling a target or style.

### Search WebView styles

While the start menu uses WinUI for its user interface, most of the search
content (all but the top search bar) is a WebView element. To style the search
WebView, CSS targets and styles can be used. For example, to set a red
background, the target `body` and the style `background: red !important` can be
used.

### Search WebView custom JavaScript code

Custom JavaScript code can be injected into the search content WebView. One use
case example is loading the [DOM
Inspector](https://github.com/janmyler/DOM-inspector) script to inspect the
search content elements:

![Screenshot](https://i.imgur.com/19PL0ss.png)

The following JavaScript code can be used to load a bundled version of DOM
Inspector:

```
const s=document.createElement('script');s.setAttribute('src','https://m417z.github.io/DOM-inspector/acid-dom/bundled.js');document.head.appendChild(s);
```

To reset all side-effects of the injected scripts, clear the custom code in the
mod settings and then terminate the search host process. It will be relaunched
automatically by Windows.

### Resource variables

Some variables, such as size and padding for various controls, are defined as
resource variables.

## Implementation notes

The VisualTreeWatcher implementation is based on the
[ExplorerTAP](https://github.com/TranslucentTB/TranslucentTB/tree/develop/ExplorerTAP)
code from the **TranslucentTB** project.

The `WindhawkBlur` brush object implementation is based on
[XamlBlurBrush](https://github.com/TranslucentTB/TranslucentTB/blob/release/ExplorerTAP/XamlBlurBrush.cpp)
from the **TranslucentTB** project.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- theme: ""
  $name: Theme
  $description: >-
    Themes are collections of styles. For details about the themes below, or for
    information about submitting your own theme, refer to the relevant section
    in the mod details.
  $options:
  - "": None
  - NoRecommendedSection: NoRecommendedSection
  - SideBySide: SideBySide
  - SideBySide2: SideBySide2
  - SideBySideMinimal: SideBySideMinimal
  - Windows10: Windows10
  - Windows10_variant_Minimal: Windows10 (Minimal)
  - TranslucentStartMenu: TranslucentStartMenu
  - Windows11_Metro10: Windows11_Metro10
  - Fluent2Inspired: Fluent2Inspired
  - RosePine: RosePine
  - Windows11_Metro10Minimal: Windows11_Metro10Minimal
  - Everblush: Everblush
  - 21996: "21996"
  - Down Aero: Down Aero
  - UniMenu: UniMenu
  - LegacyFluent: LegacyFluent
  - OnlySearch: OnlySearch
- disableNewStartMenuLayout: false
  $name: Disable the new start menu layout
  $description: >-
    Allows to disable the new start menu layout which is incompatible with some
    themes. The start menu Phone Link pane can't be used when the new layout is
    disabled.
- controlStyles:
  - - target: ""
      $name: Target
    - styles: [""]
      $name: Styles
  $name: Control styles
- webContentStyles:
  - - target: ""
      $name: Target
    - styles: [""]
      $name: Styles
  $name: Search WebView styles
- webContentCustomJs: ""
  $name: Search WebView custom JavaScript code
- styleConstants: [""]
  $name: Style constants
  $description: >-
    Constants which can be defined once and used in multiple styles.

    Each entry contains a style name and value, separated by '=', for example:

    mainColor=#fafad2

    The constant can then be used in style definitions by prepending '$', for
    example:

    Fill=$mainColor

    Background:=<AcrylicBrush TintColor="$mainColor" TintOpacity="0.3" />
- resourceVariables:
  - - variableKey: ""
      $name: Variable key
    - value: ""
      $name: Value
  $name: Resource variables
*/
// ==/WindhawkModSettings==

#include <xamlom.h>

#include <atomic>
#include <vector>

#undef GetCurrentTime

#include <winrt/Windows.UI.Xaml.h>

struct ThemeTargetStyles {
    PCWSTR target;
    std::vector<PCWSTR> styles;
};

struct Theme {
    std::vector<ThemeTargetStyles> targetStyles;
    std::vector<ThemeTargetStyles> webViewTargetStyles;
    std::vector<PCWSTR> styleConstants;
};

// clang-format off

const Theme g_themeNoRecommendedSection = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#NoTopLevelSuggestionsText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=504"}},
}};

const Theme g_themeNoRecommendedSection_variant_NewStartMenu = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#NoTopLevelSuggestionsText", {
        L"Height=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"RenderTransform:=<TranslateTransform  X=\"-100\" Y=\"8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowMoreSuggestionsButton > Grid > Windows.UI.Xaml.Controls.ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=Recommended"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsRoot > Grid[2]", {
        L"MaxHeight=0",
        L"MinHeight=0",
        L"Opacity=0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsRoot", {
        L"Grid.Row=0"}},
    ThemeTargetStyles{L"Grid#UnderlineContainer", {
        L"Visibility=Visible"}},
}};

const Theme g_themeSideBySide = {{
    ThemeTargetStyles{L"Grid#UndockedRoot", {
        L"MaxWidth=700",
        L"Margin=0,0,300,0"}},
    ThemeTargetStyles{L"Grid#AllAppsRoot", {
        L"Visibility=Visible",
        L"MinWidth=390",
        L"Padding=-40,0,110,0",
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\"1\" Opacity=\"1\"/>",
        L"Margin=-300,0,745,1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#CloseAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MaxWidth=860",
        L"Width=860"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Margin=-22,-5,0,0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Margin=45,-15,0,0"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListView > Windows.UI.Xaml.Controls.ScrollViewer > Border > Grid > Windows.UI.Xaml.Controls.Primitives.ScrollBar", {
        L"Margin=-8,0,8,2"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-8,0,8,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsWrapGrid > Windows.UI.Xaml.Controls.GridViewItem", {
        L"MaxWidth=185",
        L"MinWidth=85"}},
    ThemeTargetStyles{L"StartMenu.PinnedList#StartMenuPinnedList", {
        L"Margin=-15,0,5,0"}},
    ThemeTargetStyles{L"Grid#ShowMoreSuggestions", {
        L"Margin=0,20,0,-20"}},
    ThemeTargetStyles{L"Grid#MoreSuggestionsRoot", {
        L"Margin=-1,0,-4,-30"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#MoreSuggestionsListHeaderText", {
        L"Margin=-40,0,0,0"}},
    ThemeTargetStyles{L"Button#ShowMoreSuggestionsButton", {
        L"Margin=0,-58,25,0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Margin=30,-10,30,-60"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridViewItem", {
        L"Margin=0"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0.1\" TintLuminosityOpacity=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.SemanticZoom#ZoomControl", {
        L"IsZoomOutButtonEnabled=true"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE73F"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton", {
        L"Width=24",
        L"Height=24",
        L"FontSize=14",
        L"CornerRadius=4",
        L"VerticalAlignment=0",
        L"Margin=-8,-35,8,0"}},
    ThemeTargetStyles{L"Border#LayerBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0.1\" TintLuminosityOpacity=\"1\" Opacity=\"1\"/>"}},
}};

const Theme g_themeSideBySide2 = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Visibility=Visible",
        L"Width=510",
        L"MinHeight=585",
        L"Margin=264,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Visibility=Visible",
        L"Width=320",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"-1060\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#CloseAllAppsButton", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MinWidth=776",
        L"MaxWidth=776"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowAllAppsButton", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#RecommendedList > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.ScrollViewer#ScrollViewer > Windows.UI.Xaml.Controls.Border#Root > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.ScrollContentPresenter#ScrollContentPresenter > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.ItemsWrapGrid > Windows.UI.Xaml.Controls.GridViewItem", {
        L"MaxWidth=220",
        L"MinWidth=220"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListView#AppsList", {
        L"Padding=48,3,-36,16"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsPaneHeader", {
        L"Margin=97,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#NavigationPane", {
        L"FlowDirection=1",
        L"Margin=30,0,30,0"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView#PowerButton", {
        L"FlowDirection=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsStackPanel > Windows.UI.Xaml.Controls.ListViewItem", {
        L"FlowDirection=0"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton#StartMenuSearchBox", {
        L"Margin=23,1,23,14"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#NoSuggestionsWithoutSettingsLink", {
        L"Margin=11,0,48,0"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame > Windows.UI.Xaml.Controls.Grid#RootGrid > Windows.UI.Xaml.Controls.Grid#RootContent > Windows.UI.Xaml.Controls.Grid#MainContent > Windows.UI.Xaml.Controls.Grid#InnerContent > Windows.UI.Xaml.Shapes.Rectangle", {
        L"Margin=67,7,0,21"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.SemanticZoom#ZoomControl", {
        L"IsZoomOutButtonEnabled=true"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE73F"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton", {
        L"Width=24",
        L"Height=24",
        L"Margin=0,0,0,0",
        L"FontSize=14",
        L"CornerRadius=4",
        L"VerticalAlignment=0",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"-1\" TranslateY=\"-34\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ListView#ZoomAppsList", {
        L"Padding=86,0,25,0"}},
    ThemeTargetStyles{L"StartMenu.PinnedList#StartMenuPinnedList > Windows.UI.Xaml.Controls.Grid#Root", {
        L"Padding=0,0,4,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Margin=-32,0,32,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Margin=31,-3,12,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#NoTopLevelSuggestionsText", {
        L"Margin=31,0,63,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsContainer", {
        L"Margin=20,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ListView#RecommendedList", {
        L"Width=490"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowMoreSuggestionsButton", {
        L"Margin=0,0,36,2",
        L"Height=24"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#HideMoreSuggestionsButton", {
        L"Margin=0,0,36,2",
        L"Height=24"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#MoreSuggestionsRoot > Windows.UI.Xaml.Controls.Grid", {
        L"Margin=31,-3,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#MoreSuggestionsContainer", {
        L"Margin=20,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsStackPanel > Windows.UI.Xaml.Controls.ListViewItem[MaxHeight=5000]", {
        L"MaxWidth=460",
        L"MinWidth=460",
        L"Margin=0,0,16,0",
        L"Padding=10,0,14,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowMoreSuggestionsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock", {
        L"Margin=0,0,2,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowMoreSuggestionsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.FontIcon", {
        L"FontSize=12"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#HideMoreSuggestionsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock", {
        L"Margin=2,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#HideMoreSuggestionsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.FontIcon", {
        L"FontSize=12"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FlyoutPresenter[1]", {
        L"Margin=-268,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FlyoutPresenter[1] > Grid", {
        L"Margin=-543,0,543,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FlyoutPresenter", {
        L"Margin=-245,-12,0,0"}},
}};

const Theme g_themeSideBySideMinimal = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Visibility=Visible",
        L"Width=348",
        L"Margin=132,-42,-132,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Visibility=Visible",
        L"Width=320",
        L"Margin=-830,-42,830,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#SuggestionsParentContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Height=0",
        L"Width=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelRoot > Windows.UI.Xaml.Controls.Border", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#CloseAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Margin=-575,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=504"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Border", {
        L"Margin=-40,0,40,0",
        L"Width=325"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid", {
        L"CornerRadius=8",
        L"Margin=-85,0,0,0",
        L"Width=350"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid > Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-15,0,0,0"}},
    ThemeTargetStyles{L"Rectangle[4]", {
        L"Margin=0,-20,0,0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.AppListView", {
        L"Margin=38,0,-38,0"}},
}};

const Theme g_themeWindows10 = {{
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Grid#RootContent", {
        L"Height=800"}},
    ThemeTargetStyles{L"Rectangle[4]", {
        L"Margin=0,-20,0,0"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"Margin=-15,24,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Margin=305,-30,-305,-30"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Width=360",
        L"Visibility=Visible",
        L"Margin=-785,-18,785,0"}},
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=2.5,1,1.5,1"}},
    ThemeTargetStyles{L"Border#BackgroundBorder", {
        L"CornerRadius=0",
        L"BorderThickness=0,1,1,0",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates > Border#BorderBackground", {
        L"CornerRadius=0",
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#Border@CommonStates", {
        L"CornerRadius=0",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates", {
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"270\" />",
        L"Width=740.5",
        L"VerticalAlignment=0",
        L"Margin=40,-558,0,0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"HorizontalAlignment=2",
        L"Margin=0,0,202,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"HorizontalAlignment=2",
        L"Margin=0,-2,37,0",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"50\" />",
        L"Height=42"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#UserTileNameText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton > Grid@CommonStates > Windows.UI.Xaml.Controls.ContentPresenter > Grid > Grid#UserTileIcon", {
        L"Margin=-3,0,-3,-62",
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Width=30",
        L"Height=30"}},
    ThemeTargetStyles{L"StartDocked.AppListViewItem > Grid > ContentPresenter", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Margin=0,40,0,-40"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Transform3D:=<CompositeTransform3D TranslateY=\"-600\" TranslateX=\"465\" RotationZ=\"90\" />",
        L"Margin=-669,640,670,-640"}},
    ThemeTargetStyles{L"Grid#AllAppsPaneHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid#DroppedFlickerWorkaroundWrapper > Border", {
        L"FocusVisualPrimaryBrush:=<SolidColorBrush Color=\"#BBFEFEFF\" Opacity=\"1\"/>",
        L"CornerRadius=4",
        L"Background=#99646464",
        L"Height=80",
        L"Width=92",
        L"BorderBrush=#22FFFFFF"}},
    ThemeTargetStyles{L"StartMenu.PinnedList#StartMenuPinnedList", {
        L"MaxWidth=375",
        L"Margin=-270,-28,0,0",
        L"Height=674"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ScrollBar", {
        L"Margin=0,-15,32,15",
        L"Height=692"}},
    ThemeTargetStyles{L"MenuFlyoutSeparator", {
        L"Margin=0,-2,0,-2",
        L"Padding=4"}},
    ThemeTargetStyles{L"MenuFlyoutItem", {
        L"Margin=2,0,0,2"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter > Border > ScrollViewer", {
        L"CornerRadius=8",
        L"Padding=-3,0,-1,0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"Margin=-145,0,145,0",
        L"Width=312"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid", {
        L"CornerRadius=8",
        L"Width=350",
        L"Margin=-295,0,0,0"}},
    ThemeTargetStyles{L"Border#UninstallFlyoutPresenterBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog", {
        L"Margin=-960,214,0,0",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton", {
        L"Width=38",
        L"Height=38",
        L"Margin=0,0,317,679",
        L"Visibility=Visible",
        L"FontSize=14"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.SemanticZoom#ZoomControl", {
        L"IsZoomOutButtonEnabled=True"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE75F",
        L"FontSize=27",
        L"Padding=0,7,0,0",
        L"Margin=0,1,0,8",
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#SuggestionsParentContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#MoreSuggestionsRoot", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-32,0,32,0"}},
    ThemeTargetStyles{L"Button#CloseAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Button#Header > Border#Border@CommonStates", {
        L"BorderThickness=1",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"TextBlock#Text", {
        L"FontSize=16",
        L"HorizontalAlignment=3",
        L"VerticalAlignment=2",
        L"Height=64",
        L"Padding=5,40,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Grid@CommonStates > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=5,0,0,0",
        L"Margin=1,1,2,1.5",
        L"BorderThickness=1,2,1,0",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton > Windows.UI.Xaml.Controls.ContentPresenter@CommonStates", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=5"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid > Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-18,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#InnerContent > Rectangle", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#AllAppsHeading", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Grid@CommonStates > Border", {
        L"BorderThickness=0,0,1,1",
        L"Margin=0.5,2,0,0"}},
    ThemeTargetStyles{L"Button#ShowAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid > Border#HighContrastBorder", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.64\"/>",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Grid@CommonStates > Border", {
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Cortana.UI.Views.TaskbarSearchPage", {
        L"Margin=-100,17,0,-25",
        L"Width=740",
        L"Padding=0",
        L"Height=750"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#QueryFormulationRoot", {
        L"Padding=-14,0,-14,0"}},
    ThemeTargetStyles{L"Grid#BorderGrid", {
        L"Background=Transparent"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Background=#88FFFFFF"}},
    ThemeTargetStyles{L"FlyoutPresenter", {
        L"Margin=10,20,140,0"}},
    ThemeTargetStyles{L"FlyoutPresenter > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"BorderThickness=1",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog > Border > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
}};

const Theme g_themeWindows10_variant_Minimal = {{
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Grid#RootContent", {
        L"Height=800"}},
    ThemeTargetStyles{L"Rectangle[4]", {
        L"Margin=0,-20,0,0"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"Margin=-15,24,450,0",
        L"MinWidth=400",
        L"Width=400"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Width=425",
        L"Visibility=Visible",
        L"Margin=-750,-18,750,0"}},
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=2.5,1,1.5,1",
        L"MaxWidth=400",
        L"Margin=-121,0,121,0"}},
    ThemeTargetStyles{L"Border#BackgroundBorder", {
        L"CornerRadius=0",
        L"BorderThickness=0,1,1,0",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates > Border#BorderBackground", {
        L"CornerRadius=0",
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#Border@CommonStates", {
        L"CornerRadius=0",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates", {
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"270\" />",
        L"Width=740",
        L"VerticalAlignment=0",
        L"Margin=40,-557,0,0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"HorizontalAlignment=2",
        L"Margin=0,0,202,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"HorizontalAlignment=2",
        L"Margin=0,-2,37,0",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"50\" />",
        L"Height=42"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#UserTileNameText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton > Grid@CommonStates > Windows.UI.Xaml.Controls.ContentPresenter > Grid > Grid#UserTileIcon", {
        L"Margin=-3,0,-3,-62",
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Width=30",
        L"Height=30"}},
    ThemeTargetStyles{L"StartDocked.AppListViewItem > Grid > ContentPresenter", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Margin=0,40,0,-40"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Transform3D:=<CompositeTransform3D TranslateY=\"-600\" TranslateX=\"465\" RotationZ=\"90\" />",
        L"Margin=-669,640,670,-640"}},
    ThemeTargetStyles{L"Grid#AllAppsPaneHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView", {
        L"ItemsSource:="}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ScrollBar", {
        L"Margin=0,-15,32,15",
        L"Height=692"}},
    ThemeTargetStyles{L"MenuFlyoutSeparator", {
        L"Margin=0,-2,0,-2",
        L"Padding=4"}},
    ThemeTargetStyles{L"MenuFlyoutItem", {
        L"Margin=2,0,0,2"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter > Border > ScrollViewer", {
        L"CornerRadius=8",
        L"Padding=-3,0,-1,0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"Margin=-145,0,145,0",
        L"Width=312"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid", {
        L"CornerRadius=8",
        L"Width=350",
        L"Margin=-295,0,0,0"}},
    ThemeTargetStyles{L"Border#UninstallFlyoutPresenterBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog", {
        L"Margin=-960,214,0,0",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton", {
        L"Width=38",
        L"Height=38",
        L"Margin=0,0,383,679",
        L"Visibility=Visible",
        L"FontSize=14"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.SemanticZoom#ZoomControl", {
        L"IsZoomOutButtonEnabled=True"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE75F",
        L"FontSize=27",
        L"Padding=0,7,0,0",
        L"Margin=0,1,0,8",
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#SuggestionsParentContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#MoreSuggestionsRoot", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Button#Header > Border#Border@CommonStates", {
        L"BorderThickness=1",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"TextBlock#Text", {
        L"FontSize=16",
        L"HorizontalAlignment=3",
        L"VerticalAlignment=2",
        L"Height=64",
        L"Padding=5,40,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Grid@CommonStates > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=5,0,0,0",
        L"Margin=1,1,2,1.5",
        L"BorderThickness=1,2,1,0",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton > Windows.UI.Xaml.Controls.ContentPresenter@CommonStates", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=5"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid > Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-18,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#InnerContent > Rectangle", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#AllAppsHeading", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Grid@CommonStates > Border", {
        L"BorderThickness=0,0,1,1",
        L"Margin=0.5,2,0,0"}},
    ThemeTargetStyles{L"Button#ShowAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid > Border#HighContrastBorder", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.64\"/>",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Grid@CommonStates > Border", {
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Cortana.UI.Views.TaskbarSearchPage", {
        L"Margin=-100,17,0,-25",
        L"Width=740",
        L"Padding=0",
        L"Height=750"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#QueryFormulationRoot", {
        L"Padding=-14,0,-14,0"}},
    ThemeTargetStyles{L"Grid#BorderGrid", {
        L"Background=Transparent"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Background=#88FFFFFF"}},
    ThemeTargetStyles{L"FlyoutPresenter", {
        L"Margin=10,20,140,0"}},
    ThemeTargetStyles{L"FlyoutPresenter > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"BorderThickness=1",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog > Border > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFramePanel > Border#DropShadow", {
        L"MaxWidth=150"}},
}};

const Theme g_themeWindows10_variant_NewStartMenu = {{
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Grid#FrameRoot", {
        L"Height=750",
        L"Margin=-16,0,0,-14"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=2.5,1,1.5,1"}},
    ThemeTargetStyles{L"Border#BackgroundBorder", {
        L"CornerRadius=0",
        L"BorderThickness=0,1,1,0",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates > Border#BorderBackground", {
        L"CornerRadius=0",
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#Border@CommonStates", {
        L"CornerRadius=0",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates", {
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"270\" />",
        L"Width=740.5",
        L"VerticalAlignment=0",
        L"Margin=-11,-551,0,0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"HorizontalAlignment=2",
        L"Margin=0,0,202,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"HorizontalAlignment=2",
        L"Margin=0,-2,37,0",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"50\" />",
        L"Height=42"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#UserTileNameText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton > Grid@CommonStates > Windows.UI.Xaml.Controls.ContentPresenter > Grid > Grid#UserTileIcon", {
        L"Margin=-3,0,-3,-62",
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Width=30",
        L"Height=30"}},
    ThemeTargetStyles{L"StartDocked.AppListViewItem > Grid > ContentPresenter", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Margin=0,40,0,-40"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Transform3D:=<CompositeTransform3D TranslateY=\"-600\" TranslateX=\"465\" RotationZ=\"90\" />",
        L"Margin=-669,640,670,-640"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#PinnedList > Border > Windows.UI.Xaml.Controls.ScrollViewer > Border > Grid > Windows.UI.Xaml.Controls.ScrollContentPresenter > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.ItemsWrapGrid > Windows.UI.Xaml.Controls.GridViewItem > Border#ContentBorder@CommonStates > Grid#DroppedFlickerWorkaroundWrapper > Border", {
        L"CornerRadius=4",
        L"Background=#99646464",
        L"BorderBrush=#22FFFFFF",
        L"Margin=2"}},
    ThemeTargetStyles{L"StartMenu.PinnedList#StartMenuPinnedList", {
        L"MaxWidth=700",
        L"RenderTransform:=<TranslateTransform X=\"335\" Y=\"880\" />",
        L"Height=674"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ScrollBar", {
        L"Margin=0,-20,25,20",
        L"Height=692"}},
    ThemeTargetStyles{L"MenuFlyoutSeparator", {
        L"Margin=0,-2,0,-2",
        L"Padding=4"}},
    ThemeTargetStyles{L"MenuFlyoutItem", {
        L"Margin=2,0,0,2"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter > Border > ScrollViewer", {
        L"CornerRadius=8",
        L"Padding=-3,0,-1,0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"Margin=-145,0,145,0",
        L"Width=312"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid", {
        L"CornerRadius=8",
        L"Width=350",
        L"Margin=-295,0,0,0"}},
    ThemeTargetStyles{L"Border#UninstallFlyoutPresenterBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog", {
        L"Margin=-960,214,0,0",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Button#Header > Border#Border@CommonStates", {
        L"BorderThickness=1",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"TextBlock#Text", {
        L"FontSize=16",
        L"HorizontalAlignment=3",
        L"VerticalAlignment=2",
        L"Height=64",
        L"Padding=5,40,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Grid@CommonStates > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=5,0,0,0",
        L"Margin=1,1,2,1.5",
        L"BorderThickness=1,2,1,0",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid > Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-18,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Grid@CommonStates > Border", {
        L"BorderThickness=0,0,1,1",
        L"Margin=0.5,2,0.5,0"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid > Border#HighContrastBorder", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.64\"/>",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Grid@CommonStates > Border", {
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Cortana.UI.Views.TaskbarSearchPage > Grid > Grid", {
        L"Margin=0,0,0,-12",
        L"Width=650",
        L"Height=750"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Width=650"}},
    ThemeTargetStyles{L"Grid#QueryFormulationRoot", {
        L"Padding=-14,0,-14,0",
        L"Width=650"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"BorderBrush=#88FFFFFF",
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1",
        L"MaxWidth=600"}},
    ThemeTargetStyles{L"FlyoutPresenter", {
        L"Margin=10,20,140,0"}},
    ThemeTargetStyles{L"FlyoutPresenter > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"BorderThickness=1",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog > Border > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartMenu.StartBlendedFlexFrame", {
        L"IsCompanionShowHideButtonVisible=1"}},
    ThemeTargetStyles{L"Grid#MainContent", {
        L"Margin=0,-63,1,-63"}},
    ThemeTargetStyles{L"Grid#TopLevelHeader > Grid[2] ", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#AllAppsGrid", {
        L"Margin=20,0,-20,0"}},
    ThemeTargetStyles{L"Grid#MainMenu", {
        L"Width=700"}},
    ThemeTargetStyles{L"Border#StartDropShadow", {
        L"Width=700"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsWrapGrid", {
        L"MaxWidth=333"}},
    ThemeTargetStyles{L"StartMenu.StartHome", {
        L"Margin=-280,1,0,0"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ToggleButton", {
        L"Visibility=Visible",
        L"Margin=-632,92,632-92"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.DropDownButton > Grid > Windows.UI.Xaml.Controls.ContentPresenter > TextBlock", {
        L"Text=\uE179",
        L"FontFamily=Segoe Fluent Icons",
        L"FontSize=16",
        L"Margin=-8"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.AnimatedIcon#ChevronIcon", {
        L"Margin=-8,0,0,0"}},
    ThemeTargetStyles{L"Grid#TopLevelHeader > Grid > Grid", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView > Border > ScrollViewer", {
        L"ScrollViewer.VerticalScrollMode=2"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.DropDownButton", {
        L"Padding=0,4,0,4",
        L"Width=40",
        L"Margin=-675,172,675,-172",
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"Grid#TopLevelHeader", {
        L"Margin=0,-900,0,0"}},
    ThemeTargetStyles{L"Cortana.UI.Views.RichSearchBoxControl", {
        L"Width=600"}},
    ThemeTargetStyles{L"Grid#RootGrid@SearchBoxLocationStates", {
        L"Margin@SearchBoxOnBottomWithoutQFMargin=0"}},
}};

const Theme g_themeWindows10_variant_Minimal_NewStartMenu = {{
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"Grid#FrameRoot", {
        L"Height=775",
        L"Margin=-3,-9,220,-8",
        L"Width=400",
        L"CornerRadius=8",
        L"Padding=-1",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"Border#BackgroundBorder", {
        L"CornerRadius=0",
        L"BorderThickness=0,1,1,0",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates > Border#BorderBackground", {
        L"CornerRadius=0",
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.42\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#Border@CommonStates", {
        L"CornerRadius=0",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#ContentBorder@CommonStates", {
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"270\" />",
        L"Width=740.5",
        L"VerticalAlignment=0",
        L"Margin=-11,-551,0,0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"HorizontalAlignment=2",
        L"Margin=0,0,202,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"HorizontalAlignment=2",
        L"Margin=0,-2,37,0",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"50\" />",
        L"Height=42"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#UserTileNameText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton > Grid@CommonStates > Windows.UI.Xaml.Controls.ContentPresenter > Grid > Grid#UserTileIcon", {
        L"Margin=-3,0,-3,-62",
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Width=30",
        L"Height=30"}},
    ThemeTargetStyles{L"StartDocked.AppListViewItem > Grid > ContentPresenter", {
        L"Transform3D:=<CompositeTransform3D RotationZ=\"90\" />",
        L"Margin=0,40,0,-40"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Transform3D:=<CompositeTransform3D TranslateY=\"-600\" TranslateX=\"465\" RotationZ=\"90\" />",
        L"Margin=-669,640,670,-640"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid#DroppedFlickerWorkaroundWrapper > Border", {
        L"CornerRadius=0",
        L"Background=Transparent"}},
    ThemeTargetStyles{L"StartMenu.PinnedList#StartMenuPinnedList", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ScrollBar", {
        L"Margin=0,0,28,28",
        L"Height=740"}},
    ThemeTargetStyles{L"MenuFlyoutSeparator", {
        L"Margin=0,-2,0,-2",
        L"Padding=4"}},
    ThemeTargetStyles{L"MenuFlyoutItem", {
        L"Margin=2,0,0,2"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter > Border > ScrollViewer", {
        L"CornerRadius=8",
        L"Padding=-3,0,-1,0"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"Width=312"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid", {
        L"CornerRadius=8",
        L"Width=350"}},
    ThemeTargetStyles{L"Border#UninstallFlyoutPresenterBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Button#Header > Border#Border@CommonStates", {
        L"BorderThickness=1",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"TextBlock#Text", {
        L"FontSize=16",
        L"HorizontalAlignment=3",
        L"VerticalAlignment=2",
        L"Height=64",
        L"Padding=5,40,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Grid@CommonStates > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=5,0,0,0",
        L"Margin=1,1,2,1.5",
        L"BorderThickness=1,2,1,0",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid > Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-18,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Grid@CommonStates > Border", {
        L"BorderThickness=0,0,1,1",
        L"Margin=0.5,2,0.5,0"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid > Border#HighContrastBorder", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.64\"/>",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"#22FFFFFF\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Grid@CommonStates > Border", {
        L"BorderThickness=1",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Cortana.UI.Views.TaskbarSearchPage > Grid > Grid", {
        L"Width=650",
        L"Height=750",
        L"Margin=0,8,0,0"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#QueryFormulationRoot", {
        L"Padding=-14,0,-14,0"}},
    ThemeTargetStyles{L"Grid#BorderGrid", {
        L"Background=Transparent"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Background=#88FFFFFF",
        L"MaxWidth=600"}},
    ThemeTargetStyles{L"FlyoutPresenter", {
        L"Margin=10,20,140,0"}},
    ThemeTargetStyles{L"FlyoutPresenter > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"BorderThickness=1",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentDialog > Border > Grid > Border", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartMenu.StartBlendedFlexFrame", {
        L"IsCompanionShowHideButtonVisible=1"}},
    ThemeTargetStyles{L"Grid#MainContent", {
        L"Margin=0,-63,1,-63"}},
    ThemeTargetStyles{L"Grid#TopLevelHeader > Grid[2] ", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#AllAppsGrid", {
        L"Width=420",
        L"HorizontalAlignment=1"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.DropDownButton", {
        L"Margin=-375,650,375,-650",
        L"Width=32",
        L"Padding=0,4,0,4"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ToggleButton", {
        L"Visibility=0",
        L"Margin=-567,92,567-92",
        L"Width=32"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.DropDownButton > Grid > Windows.UI.Xaml.Controls.ContentPresenter > TextBlock", {
        L"Text=\uE179",
        L"FontFamily=Segoe Fluent Icons",
        L"FontSize=16",
        L"Margin=-8,0,0,0"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.AnimatedIcon#ChevronIcon", {
        L"Margin=-8,0,0,0"}},
    ThemeTargetStyles{L"Grid#TopLevelHeader", {
        L"Margin=0,-900,0,0"}},
    ThemeTargetStyles{L"Grid#MainMenu", {
        L"MaxWidth=630",
        L"CornerRadius=8",
        L"Padding=-1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsWrapGrid", {
        L"MaxWidth=315",
        L"Margin=14,0,0,0",
        L"HorizontalAlignment=1"}},
    ThemeTargetStyles{L"Border#TaskbarMargin", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#RootGrid@SearchBoxLocationStates", {
        L"HorizontalAlignment=Left",
        L"Margin@SearchBoxOnBottomWithoutQFMargin=0"}},
}};

const Theme g_themeTranslucentStartMenu = {{
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"Background:=$CommonBgBrush",
        L"BorderThickness=0",
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#BorderElement", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15000000\"/>",
        L"BorderThickness=0",
        L"CornerRadius=10"}},
    ThemeTargetStyles{L"Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#SuggestionsParentContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=504"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter > Border", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#00000000\"/>",
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"Background:=$CommonBgBrush",
        L"BorderThickness=0",
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"Border#AccentAppBorder", {
        L"Background:=$CommonBgBrush",
        L"BorderThickness=0",
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"Border#LayerBorder", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15000000\"/>",
        L"BorderThickness=0",
        L"CornerRadius=10"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid#DroppedFlickerWorkaroundWrapper > Border", {
        L"Background@Normal:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"0\" Opacity=\"0.2\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Margin=1",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Button#ShowAllAppsButton > ContentPresenter@CommonStates", {
        L"Background@Normal:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15C0C0C0\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton#StartMenuSearchBox > Grid > Border#BorderElement", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Grid@CommonStates > Border", {
        L"Background@Normal:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"0\" Opacity=\"0.2\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"StartDocked.AppListViewItem > Grid@CommonStates > Border", {
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.45\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.7\"/>",
        L"BorderThickness=1",
        L"Margin@Normal=4"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Grid@CommonStates > Border", {
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.45\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.7\"/>",
        L"BorderThickness=1",
        L"Margin@Normal=4"}},
    ThemeTargetStyles{L"ToolTip > ContentPresenter#LayoutRoot", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#00000000\"/>"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListViewItem > Grid@CommonStates > Border", {
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.55\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"Button#CloseAllAppsButton > ContentPresenter@CommonStates", {
        L"Background@Normal:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15C0C0C0\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Grid@CommonStates > Border", {
        L"Background@Normal:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"0\" Opacity=\"0.2\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.6\"/>"}},
    ThemeTargetStyles{L"Border#dropshadow", {
        L"CornerRadius=16",
        L"Margin=-1"}},
    ThemeTargetStyles{L"Border#DropShadow", {
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListViewItem > Grid#ContentBorder@CommonStates", {
        L"Background@PointerOver:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15C0C0C0\"/>",
        L"CornerRadius=4"}},
}, {}, {
    L"CommonBgBrush=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#25323232\"/>",
}};

const Theme g_themeTranslucentStartMenu_variant_NewStartMenu = {{
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#25323232\"/>",
        L"BorderThickness=0",
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#BorderElement", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15000000\"/>",
        L"BorderThickness=0",
        L"CornerRadius=10"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#NoTopLevelSuggestionsText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#00000000\"/>",
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#25323232\"/>",
        L"BorderThickness=0",
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"Border#AccentAppBorder", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#25323232\"/>",
        L"BorderThickness=0",
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"Border#LayerBorder", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15000000\"/>",
        L"BorderThickness=0",
        L"CornerRadius=10"}},
    ThemeTargetStyles{L"Border#ContentBorder@CommonStates > Grid#DroppedFlickerWorkaroundWrapper > Border", {
        L"Background@Normal:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"0\" Opacity=\"0.2\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Margin=1",
        L"Background@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Button#ShowAllAppsButton > ContentPresenter@CommonStates", {
        L"Background@Normal:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15C0C0C0\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Grid@CommonStates > Border", {
        L"Background@Normal:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"0\" Opacity=\"0.2\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"StartDocked.AppListViewItem > Grid@CommonStates > Border", {
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.45\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.7\"/>",
        L"BorderThickness=1",
        L"Margin@Normal=4"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Grid@CommonStates > Border", {
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.45\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.7\"/>",
        L"BorderThickness=1",
        L"Margin@Normal=4"}},
    ThemeTargetStyles{L"ToolTip > ContentPresenter#LayoutRoot", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#00000000\"/>"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListViewItem > Grid@CommonStates > Border", {
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.55\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"Button#CloseAllAppsButton > ContentPresenter@CommonStates", {
        L"Background@Normal:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15C0C0C0\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.5\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Grid@CommonStates > Border", {
        L"Background@Normal:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"0\" Opacity=\"0.2\"/>",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.6\"/>"}},
    ThemeTargetStyles{L"Border#StartDropShadow", {
        L"CornerRadius=16",
        L"Margin=-1"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListViewItem > Grid#ContentBorder@CommonStates", {
        L"Background@PointerOver:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15C0C0C0\"/>",
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ToggleButton#ShowHideCompanion", {
        L"Visibility=Visible",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.4\"/>",
        L"BorderThickness=1",
        L"FontSize=24"}},
    ThemeTargetStyles{L"Grid#UnderlineContainer", {
        L"Visibility=Visible",
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton > Grid > Border#BorderElement", {
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\"/>",
        L"BorderThickness=1",
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.4\"/>"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton > Grid ", {
        L"Background:=<WindhawkBlur BlurAmount=\"25\" TintColor=\"#15C0C0C0\"/>",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"TextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"RenderTransform:=<TranslateTransform  X=\"-100\" Y=\"8\" />"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsRoot > Grid[2]", {
        L"MaxHeight=0",
        L"MinHeight=0",
        L"Opacity=0"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsRoot", {
        L"Grid.Row=0"}},
}};

const Theme g_themeWindows11_Metro10 = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Visibility=Visible",
        L"MaxWidth=600",
        L"Margin=290,-10,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Visibility=Visible",
        L"Width=360",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"-1059\" />",
        L"Margin=180,0,-220,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#CloseAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MinWidth=650",
        L"MaxWidth=650",
        L"MaxHeight=670"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#RecommendedList > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.ScrollViewer#ScrollViewer > Windows.UI.Xaml.Controls.Border#Root > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.ScrollContentPresenter#ScrollContentPresenter > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.ItemsWrapGrid > Windows.UI.Xaml.Controls.GridViewItem", {
        L"MaxWidth=145",
        L"MinWidth=145",
        L"Margin=0"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListView#AppsList", {
        L"Padding=90,3,6,16"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsPaneHeader", {
        L"Margin=97,-10,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#NavigationPane", {
        L"FlowDirection=0",
        L"Margin=30,0,30,0"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView#PowerButton", {
        L"FlowDirection=0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"FlowDirection=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ListViewItem", {
        L"FlowDirection=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsStackPanel > Windows.UI.Xaml.Controls.ListViewItem", {
        L"FlowDirection=0"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton#StartMenuSearchBox", {
        L"Margin=23,-101,23,14"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#NoSuggestionsWithoutSettingsLink", {
        L"Margin=11,0,48,0"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame > Windows.UI.Xaml.Controls.Grid#RootGrid > Windows.UI.Xaml.Controls.Grid#RootContent > Windows.UI.Xaml.Controls.Grid#MainContent > Windows.UI.Xaml.Controls.Grid#InnerContent > Windows.UI.Xaml.Shapes.Rectangle", {
        L"Margin=67,7,0,21"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.SemanticZoom#ZoomControl", {
        L"IsZoomOutButtonEnabled=true",
        L"Margin=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE73F"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ZoomOutButton", {
        L"Width=28",
        L"Height=28",
        L"Margin=-1,-36,0,0",
        L"FontSize=14",
        L"CornerRadius=4",
        L"VerticalAlignment=0",
        L"Background=Transparent",
        L"BorderBrush=Transparent"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ListView#ZoomAppsList", {
        L"Padding=86,0,27,0"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Height=0",
        L"Margin=0,-100,0,24"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"MaxHeight=400"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#SuggestionsParentContainer", {
        L"Margin=-20,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Margin=35,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#ContentBorder > Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Border@CommonStates", {
        L"BorderBrush@Active:=<RevealBorderBrush Color=\"White\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"Background:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.3\"/>",
        L"Margin=1",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"0.8\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#ContentBorder > Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Border#BackgroundBorder", {
        L"Background:=<RevealBorderBrush Color=\"#646464\" TargetTheme=\"1\" Opacity=\".1\"/>",
        L"Margin=2"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"Rectangle[4]", {
        L"Margin=0,-20,0,0"}},
    ThemeTargetStyles{L"GridView#RecommendedList", {
        L"Margin=-20,0,20,0"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid", {
        L"Margin=0,0,80,0"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Border", {
        L"Width=350",
        L"Margin=0,0,92,0"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-10,0,0,0"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid > Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-20,0,20,0"}},
}};

const Theme g_themeFluent2Inspired = {{
    ThemeTargetStyles{L"Button#CloseAllAppsButton", {
        L"CornerRadius=14",
        L"Margin=0,0,-32,0",
        L"Padding=10,4,12,5"}},
    ThemeTargetStyles{L"Grid#ShowMoreSuggestions", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#SuggestionsParentContainer", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Button#ShowAllAppsButton", {
        L"CornerRadius=14",
        L"Margin=0,0,32,0",
        L"Padding=12,4,10,5"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Margin=30,0,120,26"}},
    ThemeTargetStyles{L"PipsPager#PinnedListPipsPager", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0.45\" TintLuminosityOpacity=\".96\" Opacity=\"1\"/>",
        L"CornerRadius=12",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".25\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#MainContent", {
        L"CornerRadius=12"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"MaxWidth=650",
        L"Height=504",
        L"Margin=-8,14,8,-14"}},
    ThemeTargetStyles{L"TextBlock#DisplayName", {
        L"Margin=0,8,0,-8",
        L"FontSize=13",
        L"FontFamily=Aptos",
        L"Opacity=.75",
        L"FontWeight=500",
        L"Padding=14,0,14,0"}},
    ThemeTargetStyles{L"TextBlock#PinnedListHeaderText", {
        L"Margin=-14,0,0,0",
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"FontSize=16",
        L"Margin=-32,0,0,0"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0.25\" TintLuminosityOpacity=\".96\" Opacity=\"1\"/>",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".25\" Opacity=\"1\"/>",
        L"CornerRadius=12"}},
    ThemeTargetStyles{L"Border#dropshadow", {
        L"CornerRadius=12",
        L"Margin=-1"}},
    ThemeTargetStyles{L"TextBlock#UserTileNameText", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"TextBlock#AllAppsHeading", {
        L"FontFamily=Aptos",
        L"Margin=-32,0,0,0",
        L"FontSize=16",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"Border#ContentBorder", {
        L"CornerRadius=6"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > ContentPresenter > TextBlock#PlaceholderText", {
        L"Text=Where to next?",
        L"FontWeight=700",
        L"FontFamily=Aptos",
        L"FontSize=24",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".85\"/>",
        L"Margin=2,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > Border", {
        L"Background=transparent",
        L"BorderBrush=transparent"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > FontIcon", {
        L"Transform3D:=<CompositeTransform3D TranslateX=\"165\" TranslateY=\"-1\"/>",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" FallbackColor=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".85\"/>",
        L"FontSize=24"}},
    ThemeTargetStyles{L"Grid#TopLevelRoot", {
        L"Margin=0,-8,0,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"Margin=512,-1290,-2000,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView > StartDocked.NavigationPaneButton > Grid > Border", {
        L"CornerRadius=99",
        L"Margin=8,0,8,0"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Margin=-64,-1290,-2000,0",
        L"CornerRadius=99",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"TextBlock#ShowAllAppsButtonText", {
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"FontWeight=500"}},
    ThemeTargetStyles{L"Button#CloseAllAppsButton > ContentPresenter > StackPanel > TextBlock", {
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"FontWeight=500"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#AllAppsPaneHeader", {
        L"Margin=64,-8,64,5"}},
    ThemeTargetStyles{L"Grid#InnerContent", {
        L"Margin=0,31,0,-64"}},
    ThemeTargetStyles{L"TextBlock#AppDisplayName", {
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"Margin=4,0,0,4",
        L"FontWeight=500"}},
    ThemeTargetStyles{L"Button#Header > Border > TextBlock", {
        L"FontFamily=Aptos",
        L"FontWeight=600",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView > StartDocked.NavigationPaneButton > Grid > Border", {
        L"CornerRadius=99",
        L"Margin=1"}},
    ThemeTargetStyles{L"TileGrid", {
        L"Background:=<SolidColorBrush Color=\"{ThemeResource TextFillColorInverse}\" Opacity=\".2\"/>",
        L"CornerRadiusProtected=8",
        L"BorderThicknessProtected=1",
        L"BorderBrushProtected:=<SolidColorBrush Color=\"{ThemeResource SurfaceStrokeColorDefault}\" Opacity=\".35\"/>"}},
    ThemeTargetStyles{L"ListViewItem", {
        L"Margin=1,0,-6,0",
        L"CornerRadius=4",
        L"Padding=0,0,6,0"}},
    ThemeTargetStyles{L"Button#Header", {
        L"Margin=4,0,-3,0"}},
    ThemeTargetStyles{L"StartDocked.AllAppsPane#AllAppsPanel", {
        L"Margin=-20,0,-6,0"}},
    ThemeTargetStyles{L"TextBlock#PlaceholderTextContentPresenter", {
        L"FontFamily=Aptos",
        L"FontSize=24",
        L"FontWeight=700",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".7\"/>"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.AnimatedIcon#SearchIconPlayer", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Button#SearchGlyphContainer", {
        L"FontSize=32",
        L"Visibility=1"}},
    ThemeTargetStyles{L"Cortana.UI.Views.CortanaRichSearchBox#SearchTextBox", {
        L"FontSize=24",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource TextFillColorPrimary}\" Opacity=\".85\"/>",
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"FontWeight=ExtraBold"}},
    ThemeTargetStyles{L"Border#LayerBorder", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon#SearchBoxOnTaskbarSearchGlyph", {
        L"Visibility=0",
        L"Margin=0",
        L"FontSize=32",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"Cortana.UI.Views.RichSearchBoxControl#SearchBoxControl", {
        L"Margin=31,31,17,17"}},
    ThemeTargetStyles{L"Grid#WebViewGrid", {
        L"Margin=-13,0,-10,15"}},
    ThemeTargetStyles{L"TextBlock#StatusMessage", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Border#LogoBackgroundPlate", {
        L"Margin=12,0,0,0"}},
    ThemeTargetStyles{L"Border#DropShadow", {
        L"CornerRadius=12",
        L"Margin=-1"}},
    ThemeTargetStyles{L"Border#DropShadowDismissTarget", {
        L"CornerRadius=12"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FlyoutPresenter[1]", {
        L"Margin=-250,50,0,0"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame > Grid#RootGrid > Grid#RootContent > Grid#MainContent > Grid#InnerContent > Rectangle", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FlyoutPresenter", {
        L"Margin=-250,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > FontIcon#SearchGlyph", {
        L"Margin=0,-3,0,0",
        L"FontSize=25",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".85\"/>"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid#Root > Border", {
        L"Height=420"}},
    ThemeTargetStyles{L"TextBox#ExpandedFolderNameTextBox", {
        L"Margin=-15,-15,15,20"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#FolderList > Border", {
        L"Margin=0,0,0,-60"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#NavigationPane > Grid > StartDocked.AppListView", {
        L"Margin=0,0,-36,0"}},
    ThemeTargetStyles{L"Image#SearchIconOn", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Image#SearchIconOff", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#ContentBorder > Border#BackgroundBorder", {
        L"CornerRadius=99",
        L"Height=38",
        L"Width=38"}},
    ThemeTargetStyles{L"Grid#ContentBorder > ContentPresenter > FontIcon", {
        L"Margin=6,0,0,0",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView > Border > ScrollViewer > Border#Root > Grid > ScrollContentPresenter > ItemsPresenter > ItemsStackPanel > ListViewItem", {
        L"Margin=-2,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"Margin=0,0,-46,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridViewItem", {
        L"Height=84"}},
}};

const Theme g_themeFluent2Inspired_variant_NewStartMenu = {{
    ThemeTargetStyles{L"Grid#ShowMoreSuggestions", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#SuggestionsParentContainer", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton", {
        L"Margin=5,10,-5,-10"}},
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0.45\" TintLuminosityOpacity=\".96\" Opacity=\"1\"/>",
        L"CornerRadius=12",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".25\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Grid#MainContent", {
        L"CornerRadius=12"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"MaxWidth=650",
        L"Margin=-8,14,8,-14"}},
    ThemeTargetStyles{L"TextBlock#DisplayName", {
        L"Margin=0,8,0,-8",
        L"FontSize=13",
        L"FontFamily=Aptos",
        L"Opacity=.75",
        L"FontWeight=500",
        L"Padding=14,0,14,0"}},
    ThemeTargetStyles{L"TextBlock#PinnedListHeaderText", {
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"FontSize=16",
        L"Margin=40,0,-40,0"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0.25\" TintLuminosityOpacity=\".96\" Opacity=\"1\"/>",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".25\" Opacity=\"1\"/>",
        L"CornerRadius=12"}},
    ThemeTargetStyles{L"TextBlock#UserTileNameText", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"TextBlock#AllListHeading", {
        L"FontFamily=Aptos",
        L"Margin=-32,0,0,0",
        L"FontSize=16",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"Border#ContentBorder", {
        L"CornerRadius=6"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton > Grid > ContentPresenter > TextBlock#PlaceholderText", {
        L"Text=Where to next?",
        L"FontWeight=700",
        L"FontFamily=Aptos",
        L"FontSize=24",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".85\"/>",
        L"Margin=2,0,0,0"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton > Grid > Border", {
        L"Background=transparent",
        L"BorderBrush=transparent"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton > Grid > FontIcon", {
        L"Transform3D:=<CompositeTransform3D TranslateX=\"165\" TranslateY=\"-1\"/>",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" FallbackColor=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".85\"/>",
        L"FontSize=24"}},
    ThemeTargetStyles{L"Grid#TopLevelRoot", {
        L"Margin=0,-8,0,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"Margin=512,-1290,-2000,0"}},
    ThemeTargetStyles{L"StartDocked.UserTileView > StartDocked.NavigationPaneButton > Grid > Border", {
        L"CornerRadius=99",
        L"Margin=8,0,8,0"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Margin=-64,-1290,-2000,0",
        L"CornerRadius=99",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#InnerContent", {
        L"Margin=-10,31,-10,-64"}},
    ThemeTargetStyles{L"TextBlock#AppDisplayName", {
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"Margin=4,0,0,4",
        L"FontWeight=500"}},
    ThemeTargetStyles{L"Button#Header > Border > TextBlock", {
        L"FontFamily=Aptos",
        L"FontWeight=600",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView > StartDocked.NavigationPaneButton > Grid > Border", {
        L"CornerRadius=99",
        L"Margin=1"}},
    ThemeTargetStyles{L"TileGrid", {
        L"Background:=<SolidColorBrush Color=\"{ThemeResource TextFillColorInverse}\" Opacity=\".2\"/>",
        L"CornerRadiusProtected=8",
        L"BorderThicknessProtected=1",
        L"BorderBrushProtected:=<SolidColorBrush Color=\"{ThemeResource SurfaceStrokeColorDefault}\" Opacity=\".35\"/>",
        L"Margin=0,0,0,20"}},
    ThemeTargetStyles{L"ListViewItem", {
        L"Margin=1,5,-5,-5",
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Button#Header", {
        L"Margin=4,0,-3,-5"}},
    ThemeTargetStyles{L"TextBlock#PlaceholderTextContentPresenter", {
        L"FontFamily=Aptos",
        L"FontSize=24",
        L"FontWeight=700",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".7\"/>"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.AnimatedIcon#SearchIconPlayer", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Button#SearchGlyphContainer", {
        L"FontSize=32",
        L"Visibility=1"}},
    ThemeTargetStyles{L"Cortana.UI.Views.CortanaRichSearchBox#SearchTextBox", {
        L"FontSize=24",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource TextFillColorPrimary}\" Opacity=\".85\"/>",
        L"FontFamily=Aptos",
        L"Opacity=.85",
        L"FontWeight=ExtraBold"}},
    ThemeTargetStyles{L"Border#LayerBorder", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon#SearchBoxOnTaskbarSearchGlyph", {
        L"Visibility=0",
        L"Margin=0",
        L"FontSize=32",
        L"Opacity=.85"}},
    ThemeTargetStyles{L"Cortana.UI.Views.RichSearchBoxControl#SearchBoxControl", {
        L"Margin=31,31,17,17"}},
    ThemeTargetStyles{L"Grid#WebViewGrid", {
        L"Margin=-13,0,-10,15"}},
    ThemeTargetStyles{L"TextBlock#StatusMessage", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Border#LogoBackgroundPlate", {
        L"Margin=12,0,0,0"}},
    ThemeTargetStyles{L"Border#StartDropShadow", {
        L"CornerRadius=12",
        L"Margin=-1"}},
    ThemeTargetStyles{L"Border#StartDropShadowDismissTarget", {
        L"CornerRadius=12"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FlyoutPresenter[1]", {
        L"Margin=-250,50,0,0"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame > Grid#RootGrid > Grid#RootContent > Grid#MainContent > Grid#InnerContent > Rectangle", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FlyoutPresenter", {
        L"Margin=-250,0,0,0"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton > Grid > FontIcon#SearchGlyph", {
        L"Margin=0,-3,0,0",
        L"FontSize=25",
        L"Foreground:=<SolidColorBrush Color=\"{ThemeResource FocusStrokeColorOuter}\" Opacity=\".85\"/>"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid#Root > Border", {
        L"Height=420"}},
    ThemeTargetStyles{L"TextBox#ExpandedFolderNameTextBox", {
        L"Margin=-15,-15,15,20"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#FolderList > Border", {
        L"Margin=0,0,0,-60"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#NavigationPane > Grid > StartDocked.AppListView", {
        L"Margin=0,0,-36,0"}},
    ThemeTargetStyles{L"Image#SearchIconOn", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Image#SearchIconOff", {
        L"Visibility=1"}},
    ThemeTargetStyles{L"Grid#ContentBorder > Border#BackgroundBorder", {
        L"CornerRadius=99",
        L"Height=38",
        L"Width=38"}},
    ThemeTargetStyles{L"Grid#ContentBorder > ContentPresenter > FontIcon", {
        L"Opacity=.85"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView > Border > ScrollViewer > Border#Root > Grid > ScrollContentPresenter > ItemsPresenter > ItemsStackPanel > ListViewItem", {
        L"Margin=-2,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"Margin=0,0,-46,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsWrapGrid", {
        L"ItemHeight=84"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ScrollBar#VerticalScrollBar", {
        L"Transform3D:=<CompositeTransform3D TranslateX=\"-40\" />",
        L"Margin=0,5,0,55"}},
    ThemeTargetStyles{L"Grid#ContentBorder > Border#BorderBackground", {
        L"Margin=1,0,-1,0"}},
    ThemeTargetStyles{L"StackPanel#RootPanel > Button#Header > Border#Border", {
        L"Margin=0,0,-1,0"}},
    ThemeTargetStyles{L"Rectangle#TextCaret", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#RootGrid@SearchBoxLocationStates ", {
        L"Margin@SearchBoxOnBottomWithoutQFMargin=-32,10,32,-10"}},
    ThemeTargetStyles{L"Grid#RootGrid@SearchBoxLocationStates > Cortana.UI.Views.CortanaRichSearchBox > Grid > TextBlock#PlaceholderTextContentPresenter", {
        L"FontSize=16"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.ScrollBar", {
        L"Margin=32,0,-32,0",
        L"Height=550"}},
}};

const Theme g_themeRosePine = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Width=350",
        L"Margin=0,-40,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Width=320",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"-800\" />",
        L"Margin=-30,-60,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#SuggestionsParentContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Margin=114,53,114,0",
        L"Background=#1f1d2e",
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelRoot > Windows.UI.Xaml.Controls.Border", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#CloseAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=340"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#Margin", {
        L"Margin=210,0,210,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicBorder", {
        L"BorderThickness=1.5",
        L"CornerRadius=25",
        L"BorderBrush=#ebbcba",
        L"Background=#191724"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"Foreground=#eb6f92"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#AppDisplayName", {
        L"Foreground=#e0def4"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#DisplayName", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#AllAppsHeading", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UserTileIcon", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicOverlay", {
        L"Opacity=0"}},
    ThemeTargetStyles{L"StartMenu.PinnedListTile > Windows.UI.Xaml.Controls.Grid#Root", {
        L"Padding=0,25,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"BorderBrush=#191724",
        L"BorderThickness=5",
        L"Background=#1f1d2e",
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Margin=-260,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"Background=#1f1d2e",
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uE7E8]", {
        L"Text=\uE72E  \uE708  \uE7E8  \uE777"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton", {
        L"Width=120"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#InnerContent > Windows.UI.Xaml.Shapes.Rectangle", {
        L"Margin=150,53,134,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PlaceholderText", {
        L"Text=Search",
        L"Foreground=#524f67",
        L"FontFamily=JetBrainsMono NF"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uF78B]", {
        L"Foreground=#c4a7e7"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ContentBorder > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"Background=#1f1d2e",
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uE713]", {
        L"Foreground=#c4a7e7"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"Margin=0,0,-38,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AppBorder", {
        L"Background=#191724",
        L"BorderThickness=1.5",
        L"BorderBrush=#ebbcba",
        L"CornerRadius=25"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#OuterBorderGrid", {
        L"CornerRadius=25"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#TaskbarSearchBackground", {
        L"BorderThickness=1.5",
        L"BorderBrush=#ebbcba"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFramePanel", {
        L"MaxWidth=500",
        L"Width=500",
        L"MinWidth=500"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame > Grid#RootGrid > Grid#RootContent", {
        L"MaxWidth=500",
        L"Width=500",
        L"MinWidth=500"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MinWidth=500",
        L"Width=500",
        L"MaxWidth=500"}},
    ThemeTargetStyles{L"StartMenu:ExpandedFolderList", {
        L"Margin=-50,0,-50,0"}},
}};

const Theme g_themeRosePine_variant_NewStartMenu = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.SearchBoxToggleButton", {
        L"Background=#1f1d2e",
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=340",
        L"Width=340"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#Margin", {
        L"Margin=210,0,210,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicBorder", {
        L"BorderThickness=1.5",
        L"CornerRadius=25",
        L"BorderBrush=#ebbcba",
        L"Background=#191724"}},
    ThemeTargetStyles{L"StartMenu.StartBlendedFlexFrame", {
        L"CornerRadius=25",
        L"IsCompanionShowHideButtonVisible=1"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"Foreground=#eb6f92"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#AppDisplayName", {
        L"Foreground=#e0def4"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#DisplayName", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UserTileIcon", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicOverlay", {
        L"Opacity=0"}},
    ThemeTargetStyles{L"StartMenu.PinnedListTile > Windows.UI.Xaml.Controls.Grid#Root", {
        L"Padding=0,25,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"BorderBrush=#191724",
        L"BorderThickness=5",
        L"Background=#1f1d2e",
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Margin=-260,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"Background=#1f1d2e",
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uE7E8]", {
        L"Text=\uE72E  \uE708  \uE7E8  \uE777"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton", {
        L"Width=120"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PlaceholderText", {
        L"Text=Search",
        L"Foreground=#524f67",
        L"FontFamily=JetBrainsMono NF"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uF78B]", {
        L"Foreground=#c4a7e7"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ContentBorder > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"Background=#1f1d2e",
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uE713]", {
        L"Foreground=#c4a7e7"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"Margin=0,0,-38,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AppBorder", {
        L"Background=#191724",
        L"BorderThickness=1.5",
        L"BorderBrush=#ebbcba",
        L"CornerRadius=25"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#OuterBorderGrid", {
        L"CornerRadius=25"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#TaskbarSearchBackground", {
        L"BorderThickness=1.5",
        L"BorderBrush=#ebbcba"}},
    ThemeTargetStyles{L"StartMenu:ExpandedFolderList", {
        L"Margin=-50,0,-50,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#AllAppsGrid > Border > Windows.UI.Xaml.Controls.ScrollViewer > Border > Grid > Windows.UI.Xaml.Controls.ScrollContentPresenter > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.ItemsWrapGrid", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#FrameRoot", {
        L"MaxHeight=550"}},
    ThemeTargetStyles{L"Grid#MainMenu", {
        L"Width=550"}},
    ThemeTargetStyles{L"Border#StartDropShadow", {
        L"CornerRadius=20"}},
    ThemeTargetStyles{L"Grid#TopLevelSuggestionsRoot", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#AllListHeading", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"ScrollViewer", {
        L"ScrollViewer.VerticalScrollMode=2"}},
    ThemeTargetStyles{L"Grid#TopLevelHeader > Grid[2]", {
        L"Visibility=Collapsed"}},
}};

const Theme g_themeWindows11_Metro10Minimal = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"MaxWidth=0",
        L"Margin=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Visibility=Visible",
        L"Width=540",
        L"Margin=-1000,0,0,0"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MinWidth=460",
        L"MaxWidth=460",
        L"MaxHeight=670"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowAllAppsButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListView#AppsList", {
        L"Padding=90,3,6,16"}},
    ThemeTargetStyles{L"Grid#AllAppsPaneHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#NavigationPane", {
        L"Margin=30,0,30,0"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView", {
        L"FlowDirection=1"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton#StartMenuSearchBox", {
        L"Margin=23,-101,23,14"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Height=0"}},
    ThemeTargetStyles{L"Rectangle[4]", {
        L"Margin=0,-20,0,0"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Grid > Microsoft.UI.Xaml.Controls.PipsPager#PinnedListPipsPager", {
        L"Margin=-20,0,20,0"}},
    ThemeTargetStyles{L"StartMenu.StartInnerFrame", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Grid#RootContent", {
        L"MinWidth=460"}},
    ThemeTargetStyles{L"Grid#InnerContent", {
        L"Margin=0,12,0,0"}},
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\".85\" Opacity=\"1\"/>",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".25\" Opacity=\"1\"/>",
        L"BorderThickness=1"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\".85\" Opacity=\"1\"/>",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".25\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Border#LayerBorder", {
        L"Visibility=1"}},
}};

const Theme g_themeEverblush = {{
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"Background=#141b1e",
        L"BorderBrush=#268ccf7e"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"Background=#141b1e"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > Border", {
        L"Background=#232a2d",
        L"BorderBrush=transparent"}},
    ThemeTargetStyles{L"StartMenu.ExpandedFolderList > Grid > Border", {
        L"Background=#232a2d"}},
    ThemeTargetStyles{L"TextBlock#PlaceholderText", {
        L"Foreground=#80b3b9b8"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button", {
        L"Background=#d28ccf7e"}},
    ThemeTargetStyles{L"StackPanel > Windows.UI.Xaml.Controls.Button", {
        L"Background=transparent",
        L"BorderBrush=transparent"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.ItemsRepeater > Windows.UI.Xaml.Controls.Button", {
        L"Background=transparent",
        L"BorderBrush=transparent"}},
    ThemeTargetStyles{L"TextBlock#DisplayName", {
        L"Foreground=#b3b9b8"}},
    ThemeTargetStyles{L"TextBlock#Title", {
        L"Foreground=#b3b9b8"}},
    ThemeTargetStyles{L"TextBlock#Subtitle", {
        L"Foreground=#6cbfbf"}},
    ThemeTargetStyles{L"TextBlock#PinnedListHeaderText", {
        L"Foreground=#8ccf7e"}},
    ThemeTargetStyles{L"TextBlock#TopLevelSuggestionsListHeaderText", {
        L"Foreground=#8ccf7e"}},
    ThemeTargetStyles{L"TextBlock#AllAppsHeading", {
        L"Foreground=#8ccf7e"}},
    ThemeTargetStyles{L"TextBlock#MoreSuggestionsListHeaderText", {
        L"Foreground=#8ccf7e"}},
    ThemeTargetStyles{L"TextBlock#AppDisplayName", {
        L"Foreground=#b3b9b8"}},
    ThemeTargetStyles{L"TextBlock#Text", {
        L"Foreground=#e5c76b"}},
    ThemeTargetStyles{L"TextBlock#FolderGlyph", {
        L"Foreground=#e5c76b"}},
    ThemeTargetStyles{L"TextBlock#StatusMessage", {
        L"Foreground=#8ccf7e"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#ContentBorder > Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Border@CommonStates", {
        L"Background:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0,0.5\"> <GradientStop Color=\"#268ccf7e\" Offset=\"0\" /><GradientStop Color=\"#26e5c76b\" Offset=\"1\" /></LinearGradientBrush>",
        L"BorderBrush:=<LinearGradientBrush StartPoint=\"0.5,0\" EndPoint=\"0,0.5\"> <GradientStop Color=\"#828ccf7e\" Offset=\"0\" /><GradientStop Color=\"#82e5c76b\" Offset=\"1\" /></LinearGradientBrush>",
        L"CornerRadius=6"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#ContentBorder > Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Border#BackgroundBorder", {
        L"Background=transparent"}},
    ThemeTargetStyles{L"Border#AppBorder", {
        L"Background=#141b1e"}},
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"Background=#232a2d",
        L"BorderBrush=transparent"}},
    ThemeTargetStyles{L"Grid", {
        L"RequestedTheme=2"}},
    ThemeTargetStyles{L"TextBlock#UserTileNameText", {
        L"Foreground=#67b0e8"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ContentPresenter > Windows.UI.Xaml.Controls.FontIcon > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"Foreground=#6cbfbf"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.FontIcon > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"Foreground=#e5c76b"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"Background=#232a2d"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon#SearchGlyph > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"Foreground=#232a2d"}},
}};

const Theme g_theme21996 = {{
    ThemeTargetStyles{L"Border#TaskbarSearchBackground", {
        L"CornerRadius=4",
        L"BorderThickness=0,0,0,0",
        L"Height=33",
        L"BorderBrush:=<SolidColorBrush Color=\"{ThemeResource ControlStrokeColorDefault}\"/>"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > ContentPresenter > TextBlock#PlaceholderText", {
        L"Margin=0,0,0,2"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton#StartMenuSearchBox > Grid > Border#BorderElement", {
        L"BorderThickness=0,0,0,2",
        L"BorderBrush:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorLight1}\"/>"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > FontIcon > Grid > TextBlock", {
        L"Foreground:=<SolidColorBrush Color=\"gray\" />",
        L"Margin=0,0,0,1",
        L"Transform3D:=<CompositeTransform3D RotationY=\"180\" TranslateX=\"16\" />"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.AnimatedIcon#SearchIconPlayer", {
        L"Visibility=1",
        L"FlowDirection=1",
        L"Transform3D:=<CompositeTransform3D RotationY=\"180\" TranslateX=\"16\" />"}},
    ThemeTargetStyles{L"FontIcon#SearchBoxOnTaskbarSearchGlyph", {
        L"Visibility=0",
        L"Foreground:=<SolidColorBrush Color=\"gray\" />",
        L"FlowDirection=1",
        L"FontFamily=Segoe Fluent Icons",
        L"RequestedTheme=1",
        L"Transform3D:=<CompositeTransform3D RotationY=\"180\" TranslateX=\"23\" TranslateY=\"0.5\" />",
        L"FontSize=17"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton#StartMenuSearchBox > Grid", {
        L"BorderBrush:=<SolidColorBrush Color=\"{ThemeResource ControlStrokeColorDefault}\"/>",
        L"BorderThickness=1,1,1,0",
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Cortana.UI.Views.RichSearchBoxControl#SearchBoxControl > Grid#RootGrid", {
        L"CornerRadius=4",
        L"BorderBrush:=<SolidColorBrush Color=\"{ThemeResource SystemAccentColorLight1}\" />",
        L"BorderThickness=2,2,2,2",
        L"Margin=-2,-0,0,-2"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#SearchBoxOnTaskbarGleamContainer", {
        L"CornerRadius=4"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#SearchBoxOnTaskbarGleamImageContainer", {
        L"CornerRadius=4",
        L"Transform3D:=<CompositeTransform3D TranslateX=\"1.8\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Image#SearchIconOff", {
        L"Transform3D:=<CompositeTransform3D RotationY=\"180\" TranslateX=\"16\" TranslateY=\"-1\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Image#SearchIconOn", {
        L"Transform3D:=<CompositeTransform3D RotationY=\"180\" TranslateX=\"16\" TranslateY=\"-1\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowAllAppsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock#ShowAllAppsButtonText", {
        L"Text=All apps"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#AllAppsHeading", {
        L"Text=All apps"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Height=0",
        L"Margin=0,0,0,32"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame", {
        L"Height=670"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#InnerContent", {
        L"Margin=0,0,0,0"}},
    ThemeTargetStyles{L"Cortana.UI.Views.HostedWebViewControl#QueryFormulationHostedWebView", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemChromeMediumColor}\" TintOpacity=\"1\" TintLuminosityOpacity=\"1\" FallbackColor=\"{ThemeResource SystemChromeLowColor}\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#QueryFormulationRoot", {
        L"CornerRadius=10"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicBorder", {
        L"Opacity=0.5"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#MainContent", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemChromeMediumColor}\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.5\" FallbackColor=\"{ThemeResource SystemChromeLowColor}\" />",
        L"CornerRadius=7"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AppBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemChromeMediumColor}\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.7\" FallbackColor=\"{ThemeResource SystemChromeLowColor}\" />"}},
}};

const Theme g_themeDown_Aero = {{
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MaxHeight=520"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=340"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"RenderTransform:=<TranslateTransform Y=\"-408\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#NoTopLevelSuggestionsText", {
        L"Height=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions > Windows.UI.Xaml.Controls.Button > Windows.UI.Xaml.Controls.ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=Recommended"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#DropShadow", {
        L"CornerRadius=30"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#StartDropShadow", {
        L"CornerRadius=30"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame > Grid#RootGrid > Grid#RootContent > Grid#MainContent > Grid#InnerContent > Rectangle", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"CornerRadius=30",
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"CornerRadius=30",
        L"Margin=0,0,0,20",
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\"1\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#AllAppsRoot", {
        L"Margin=0,0,0,40"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Margin=0,0,0,40"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneView#NavigationPane > Windows.UI.Xaml.Controls.Grid#RootPanel", {
        L"Margin=0,-10,0,10"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView > Windows.UI.Xaml.Controls.Border", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>",
        L"CornerRadius=18",
        L"Margin=0,0,15,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Windows.UI.Xaml.Controls.Grid@CommonStates > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\"1\" Opacity=\"1\"/>",
        L"BorderBrush@Normal:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".1\" Opacity=\"1\"/>",
        L"CornerRadius=30",
        L"BorderThickness=5",
        L"Margin=-7",
        L"BorderBrush@PointerOver:=<AcrylicBrush TintColor=\"{ThemeResource SystemAccentColor}\" FallbackColor=\"{ThemeResource SystemAccentColor}\" TintOpacity=\".8\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Grid > Border#BackgroundBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>",
        L"CornerRadius=18"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowAllAppsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter@CommonStates", {
        L"Background@Normal:=<SolidColorBrush Color=\"{ThemeResource SystemChromeAltHighColor}\" Opacity=\".8\"/>",
        L"Background@PointerOver:=<SolidColorBrush Color=\"{ThemeResource SystemBaseLowColor}\" Opacity=\"1\" />",
        L"Padding=10,7",
        L"Margin=0,0,-35,0",
        L"CornerRadius=0,15,15,0",
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#ShowMoreSuggestionsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter@CommonStates", {
        L"Background@Normal:=<SolidColorBrush Color=\"{ThemeResource SystemAltMediumLowColor}\" Opacity=\"0\" />",
        L"BorderBrush@Normal:=<SolidColorBrush Color=\"{ThemeResource SystemChromeAltHighColor}\" Opacity=\".8\"/>",
        L"Padding=10,5",
        L"Margin=0,0,19,0",
        L"CornerRadius=15,0,0,15",
        L"BorderThickness=2,2,0,2",
        L"Background@PointerOver:=<SolidColorBrush Color=\"{ThemeResource SystemBaseLowColor}\" Opacity=\".7\" />",
        L"BorderBrush@PointerOver:=<SolidColorBrush Color=\"{ThemeResource SystemBaseLowColor}\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#HideMoreSuggestionsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter", {
        L"Background:=<SolidColorBrush Color=\"{ThemeResource SystemChromeMediumLowColor}\" Opacity=\"1\"/>",
        L"Padding=10,6",
        L"Margin=0,0,-35,0",
        L"CornerRadius=15"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#CloseAllAppsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter", {
        L"Background:=<SolidColorBrush Color=\"{ThemeResource SystemChromeMediumLowColor}\" Opacity=\"1\"/>",
        L"Padding=10,6",
        L"Margin=0,0,-35,0",
        L"CornerRadius=15"}},
}};

const Theme g_themeUniMenu = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#NoTopLevelSuggestionsText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsContainer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.UserTileView", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.AppListView", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.PipsPager", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.LauncherFrame > Grid#RootGrid > Grid#RootContent > Grid#MainContent > Grid#InnerContent > Rectangle", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MaxHeight=520",
        L"Margin=-8,10,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Margin=0,-70,0,-90"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=375",
        L"Margin=13,30,-13,0"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton", {
        L"Width=480",
        L"Height=40",
        L"Margin=-100,0,0,30",
        L"Canvas.ZIndex=1"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Grid > Windows.UI.Xaml.Controls.Border", {
        L"CornerRadius=5",
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\".3\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.PowerOptionsView", {
        L"Margin=-68,-870,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridView#PinnedList > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.ScrollViewer > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.ScrollContentPresenter > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.ItemsWrapGrid > Windows.UI.Xaml.Controls.GridViewItem", {
        L"Margin=5,10,0,0"}},
    ThemeTargetStyles{L"StartMenu.PinnedList > Grid#Root", {
        L"Padding=0"}},
    ThemeTargetStyles{L"TextBlock#PinnedListHeaderText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"TextBlock#ShowAllAppsButtonText", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Button#ShowAllAppsButton", {
        L"Margin=0,-2,30,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uE76C]", {
        L"Text=\uEA37",
        L"FontSize=16"}},
    ThemeTargetStyles{L"Button#ShowAllAppsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter@CommonStates", {
        L"Width=40",
        L"Height=40",
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\".3\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\".2\" TintLuminosityOpacity=\".3\" Opacity=\"1\"/>",
        L"Background@PointerOver:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".2\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Grid@CommonStates > Border#BackgroundBorder", {
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\".3\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>",
        L"BorderThickness=1",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\".2\" TintLuminosityOpacity=\".3\" Opacity=\"1\"/>",
        L"Background@PointerOver:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".2\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=Back]", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock[Text=\uE76B]", {
        L"Text=\uE846",
        L"FontSize=16"}},
    ThemeTargetStyles{L"Button#CloseAllAppsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter@CommonStates", {
        L"Width=40",
        L"Height=40",
        L"Background:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\".3\" TintLuminosityOpacity=\".5\" Opacity=\"1\"/>",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\".2\" TintLuminosityOpacity=\".3\" Opacity=\"1\"/>",
        L"Background@PointerOver:=<AcrylicBrush TintColor=\"{ThemeResource SurfaceStrokeColorDefault}\" FallbackColor=\"{ThemeResource SurfaceStrokeColorDefault}\" TintOpacity=\"0\" TintLuminosityOpacity=\".2\" Opacity=\"1\"/>"}},
    ThemeTargetStyles{L"Button#CloseAllAppsButton", {
        L"Margin=0,-102,-33,0"}},
    ThemeTargetStyles{L"Grid#AllAppsRoot", {
        L"Margin=0,-20,0,-40"}},
    ThemeTargetStyles{L"Border#AcrylicOverlay", {
        L"Margin=0,0,0,-58",
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\".65\" Opacity=\"1\"/>",
        L"BorderThickness=2",
        L"Background=Transparent",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"Border#AcrylicBorder", {
        L"Margin=6,6,6,12",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"Border#DropShadow", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#StartDropShadow", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Cortana.UI.Views.TaskbarSearchPage", {
        L"Margin=5,0,0,8"}},
    ThemeTargetStyles{L"Cortana.UI.Views.TaskbarSearchPage > Grid#RootGrid", {
        L"BorderBrush:=<AcrylicBrush TintColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" FallbackColor=\"{ThemeResource CardStrokeColorDefaultSolid}\" TintOpacity=\"0\" TintLuminosityOpacity=\".65\" Opacity=\"1\"/>",
        L"BorderThickness=2",
        L"Padding=3,3,3,-8",
        L"CornerRadius=8"}},
    ThemeTargetStyles{L"Border#dropshadow", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Border#LayerBorder", {
        L"Visibility=Collapsed"}},
}};

const Theme g_themeLegacyFluent = {{
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridViewItem > Windows.UI.Xaml.Controls.Border#ContentBorder@CommonStates > Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"BorderBrush:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"BorderThickness=2",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background:=<SolidColorBrush Color=\"{ThemeResource SystemListLowColor}\" Opacity=\"1\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.GridViewItem", {
        L"Width=100",
        L"Height=100",
        L"Margin=2"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ItemsWrapGrid", {
        L"HorizontalAlignment=Center"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#TopLevelSuggestionsListHeader", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#NoTopLevelSuggestionsText", {
        L"Height=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions", {
        L"RenderTransform:=<TranslateTransform Y=\"-586\" X=\"-55\" />"}},
    ThemeTargetStyles{L"StartMenu.PinnedList", {
        L"Height=518"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#ShowMoreSuggestions > Windows.UI.Xaml.Controls.Button > Windows.UI.Xaml.Controls.ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=Recommended"}},
    ThemeTargetStyles{L"StartMenu.PinnedListTile > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Grid#DisplayNameAndDownloadIconContainer > Windows.UI.Xaml.Controls.TextBlock#DisplayName", {
        L"Margin=4,0,0,2",
        L"TextAlignment=1"}},
    ThemeTargetStyles{L"StartMenu.PinnedListTile > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Grid#DisplayNameAndDownloadIconContainer", {
        L"HorizontalAlignment=1",
        L"Width=95",
        L"Margin=0",
        L"VerticalAlignment=2"}},
    ThemeTargetStyles{L"StartMenu.PinnedListTile > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Grid#LogoContainer", {
        L"Margin=0,17,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#DroppedFlickerWorkaroundWrapper > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.Grid", {
        L"Height=95",
        L"Width=100"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PinnedListHeaderText", {
        L"Text=PINNED",
        L"FontWeight=Bold"}},
    ThemeTargetStyles{L"StartDocked.AppListView#NavigationPanePlacesListView > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.ScrollViewer > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.ScrollContentPresenter > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.ItemsStackPanel > StartDocked.AppListViewItem > Windows.UI.Xaml.Controls.Grid@CommonStates > Windows.UI.Xaml.Controls.Border", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicBorder", {
        L"CornerRadius=0",
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AcrylicOverlay", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"Margin=-13,13,0,0"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#PowerButton > Windows.UI.Xaml.Controls.Grid@CommonStates > Windows.UI.Xaml.Controls.Border", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"StartDocked.NavigationPaneButton#UserTileButton > Windows.UI.Xaml.Controls.Grid@CommonStates > Windows.UI.Xaml.Controls.Border", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"StartDocked.SearchBoxToggleButton > Windows.UI.Xaml.Controls.Grid@CommonStates > Windows.UI.Xaml.Controls.Border", {
        L"CornerRadius=0",
        L"Background:=<SolidColorBrush Color=\"{ThemeResource SystemChromeLowColor}\" Opacity=\"0.5\"/>",
        L"BorderThickness=2",
        L"BorderBrush:=<SolidColorBrush Color=\"{ThemeResource SystemListMediumColor}\"/>",
        L"BorderBrush@PointerOver:=<SolidColorBrush Color=\"{ThemeResource SystemChromeHighColor}\"/>",
        L"BorderBrush@CheckedPointerOver:=<SolidColorBrush Color=\"{ThemeResource SystemChromeHighColor}\"/>"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Image#SearchIconOn", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Image#SearchIconOff", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon#SearchGlyph", {
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#PlaceholderText", {
        L"Text=Type here to search"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button > Windows.UI.Xaml.Controls.ContentPresenter@CommonStates", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"Background=Transparent",
        L"Height=30"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListViewItem > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.Button#Header > Windows.UI.Xaml.Controls.Border@CommonStates", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"Background=Transparent",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"StartDocked.AllAppsGridListViewItem > Windows.UI.Xaml.Controls.Grid@CommonStates > Windows.UI.Xaml.Controls.Border#BorderBackground", {
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"Background=Transparent",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#AllAppsHeading", {
        L"Text=ALL",
        L"FontWeight=Bold"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#StatusMessage[Text=System]", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#Root > Windows.UI.Xaml.Controls.Grid#VerticalRoot > Windows.UI.Xaml.Controls.Primitives.Thumb > Windows.UI.Xaml.Shapes.Rectangle#ThumbVisual", {
        L"RadiusX=0",
        L"RadiusY=0",
        L"Margin=0,0,0,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Shapes.Rectangle#VerticalTrackRect", {
        L"RadiusX=0",
        L"RadiusY=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.RepeatButton#VerticalSmallIncrease > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.FontIcon#Arrow > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE011"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Primitives.RepeatButton#VerticalSmallDecrease > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.FontIcon#Arrow > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"Text=\uE010"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Windows.UI.Xaml.Controls.Grid#ContentBorder@CommonStates > Windows.UI.Xaml.Controls.Border", {
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"Background=Transparent",
        L"BorderBrush:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"BorderThickness@PointerOver=2",
        L"BorderThickness@Pressed=2"}},
    ThemeTargetStyles{L"StartDocked.AllAppsZoomListViewItem > Windows.UI.Xaml.Controls.Grid#ContentBorder@DisabledStates > Windows.UI.Xaml.Controls.Border", {
        L"RenderTransform@Disabled:=<ScaleTransform ScaleX=\"0\" ScaleY=\"0\" CenterX=\"0.5\" CenterY=\"0.5\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#LayerBorder", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Cortana.UI.Views.TaskbarSearchPage", {
        L"RenderTransform:=<TranslateTransform X=\"-13\" Y=\"1\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#TaskbarMargin", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#AppBorder", {
        L"CornerRadius=0",
        L"BorderThickness=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Border#dropshadow", {
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#RootGrid@SearchBoxInputStates > Windows.UI.Xaml.Controls.Border#TaskbarSearchBackground", {
        L"CornerRadius=0",
        L"Background:=<SolidColorBrush Color=\"{ThemeResource SystemChromeLowColor}\" Opacity=\"0.5\"/>",
        L"BorderThickness=2",
        L"BorderBrush:=<SolidColorBrush Color=\"{ThemeResource SystemListMediumColor}\"/>",
        L"BorderBrush@SearchBoxHover:=<SolidColorBrush Color=\"{ThemeResource SystemChromeHighColor}\"/>",
        L"BorderBrush@FindInStartSearchBoxHover:=<SolidColorBrush Color=\"{ThemeResource SystemChromeHighColor}\"/>",
        L"Margin=25,37,21,15"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#SearchGlyphContainer", {
        L"Visibility=Visible"}},
    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.AnimatedIcon#SearchIconPlayer", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#MoreSuggestionsListHeaderText", {
        L"Text=RECOMMENDED",
        L"FontWeight=Bold"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ListView#RecommendedList > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.ScrollViewer > Windows.UI.Xaml.Controls.Border > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.ScrollContentPresenter > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.ItemsStackPanel > Windows.UI.Xaml.Controls.ListViewItem > Windows.UI.Xaml.Controls.Grid@CommonStates > Windows.UI.Xaml.Controls.Border", {
        L"BorderThickness=1",
        L"CornerRadius=0",
        L"Background@PointerOver:=<RevealBorderBrush Color=\"{ThemeResource SystemListLowColor}\" TargetTheme=\"1\" Opacity=\"0.5\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"Background@Pressed:=<RevealBorderBrush Color=\"{ThemeResource SystemChromeHighColor}\" TargetTheme=\"1\" Opacity=\"0.6\" FallbackColor=\"{ThemeResource SystemListLowColor}\"/>",
        L"BorderBrush@PointerOver:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />",
        L"Background=Transparent",
        L"BorderBrush@Pressed:=<RevealBorderBrush Color=\"Transparent\" TargetTheme=\"1\" Opacity=\"1\" />"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ToolTip", {
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.MenuFlyoutPresenter > Windows.UI.Xaml.Controls.Border", {
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock", {
        L"FontFamily=Segoe UI, Segoe MDL2 Assets"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.FontIcon > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"FontFamily=Segoe MDL2 Assets, Segoe UI"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.MenuFlyoutItem", {
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.ListViewItem", {
        L"CornerRadius=0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Button#HideMoreSuggestionsButton > Windows.UI.Xaml.Controls.ContentPresenter#ContentPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.FontIcon > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.TextBlock", {
        L"FontSize=10"}},
}, {
    ThemeTargetStyles{L"#chatButtonRight", {
        L"display: none !important"}},
    ThemeTargetStyles{L".groupTitle", {
        L"text-transform: uppercase !important",
        L"font-weight: bold !important"}},
    ThemeTargetStyles{L"div, span, h1, h2, h3, h4, h5, p", {
        L"font-family: Segoe UI !important"}},
    ThemeTargetStyles{L".cortanaFontIcon, .iconContent", {
        L"font-family: Segoe MDL2 Assets !important"}},
}};

const Theme g_themeOnlySearch = {{
    ThemeTargetStyles{L"StartDocked.StartSizingFrame", {
        L"MinHeight=100"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.Grid#UndockedRoot", {
        L"Visibility=Collapsed"}},
}};

// clang-format on

std::atomic<DWORD> g_targetThreadId = 0;

void ApplyCustomizations(InstanceHandle handle,
                         winrt::Windows::UI::Xaml::FrameworkElement element,
                         PCWSTR fallbackClassName);
void CleanupCustomizations(InstanceHandle handle);

HMODULE GetCurrentModuleHandle() {
    HMODULE module;
    if (!GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                               GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           L"", &module)) {
        return nullptr;
    }

    return module;
}

////////////////////////////////////////////////////////////////////////////////
// clang-format off

#pragma region winrt_hpp

#include <Unknwn.h>
#include <winrt/base.h>

// forward declare namespaces we alias
namespace winrt {
    namespace Windows {
        namespace Foundation {}
        namespace UI::Xaml {}
    }
}

// alias some long namespaces for convenience
namespace wf = winrt::Windows::Foundation;
namespace wux = winrt::Windows::UI::Xaml;

#pragma endregion  // winrt_hpp

#pragma region visualtreewatcher_hpp

#include <winrt/Windows.UI.Xaml.h>

class VisualTreeWatcher : public winrt::implements<VisualTreeWatcher, IVisualTreeServiceCallback2, winrt::non_agile>
{
public:
    VisualTreeWatcher(winrt::com_ptr<IUnknown> site);

    VisualTreeWatcher(const VisualTreeWatcher&) = delete;
    VisualTreeWatcher& operator=(const VisualTreeWatcher&) = delete;

    VisualTreeWatcher(VisualTreeWatcher&&) = delete;
    VisualTreeWatcher& operator=(VisualTreeWatcher&&) = delete;

    ~VisualTreeWatcher();

    void UnadviseVisualTreeChange();

private:
    HRESULT STDMETHODCALLTYPE OnVisualTreeChange(ParentChildRelation relation, VisualElement element, VisualMutationType mutationType) override;
    HRESULT STDMETHODCALLTYPE OnElementStateChanged(InstanceHandle element, VisualElementState elementState, LPCWSTR context) noexcept override;

    wf::IInspectable FromHandle(InstanceHandle handle)
    {
        wf::IInspectable obj;
        winrt::check_hresult(m_XamlDiagnostics->GetIInspectableFromHandle(handle, reinterpret_cast<::IInspectable**>(winrt::put_abi(obj))));
        return obj;
    }

    winrt::com_ptr<IXamlDiagnostics> m_XamlDiagnostics = nullptr;
};

#pragma endregion  // visualtreewatcher_hpp

#pragma region visualtreewatcher_cpp

VisualTreeWatcher::VisualTreeWatcher(winrt::com_ptr<IUnknown> site) :
    m_XamlDiagnostics(site.as<IXamlDiagnostics>())
{
    Wh_Log(L"Constructing VisualTreeWatcher");
    // winrt::check_hresult(m_XamlDiagnostics.as<IVisualTreeService3>()->AdviseVisualTreeChange(this));

    // Calling AdviseVisualTreeChange from the current thread causes the app to
    // hang in Advising::RunOnUIThread sometimes. Creating a new thread and
    // calling it from there fixes it.
    HANDLE thread = CreateThread(
        nullptr, 0,
        [](LPVOID lpParam) -> DWORD {
            auto watcher = reinterpret_cast<VisualTreeWatcher*>(lpParam);
            HRESULT hr = watcher->m_XamlDiagnostics.as<IVisualTreeService3>()->AdviseVisualTreeChange(watcher);
            watcher->Release();
            if (FAILED(hr)) {
                Wh_Log(L"Error %08X", hr);
            }
            return 0;
        },
        this, 0, nullptr);
    if (thread) {
        AddRef();
        CloseHandle(thread);
    }
}

VisualTreeWatcher::~VisualTreeWatcher()
{
    Wh_Log(L"Destructing VisualTreeWatcher");
}

void VisualTreeWatcher::UnadviseVisualTreeChange()
{
    Wh_Log(L"UnadviseVisualTreeChange VisualTreeWatcher");
    winrt::check_hresult(m_XamlDiagnostics.as<IVisualTreeService3>()->UnadviseVisualTreeChange(this));
}

HRESULT VisualTreeWatcher::OnVisualTreeChange(ParentChildRelation, VisualElement element, VisualMutationType mutationType) try
{
    if (GetCurrentThreadId() != g_targetThreadId)
    {
        return S_OK;
    }

    Wh_Log(L"========================================");

    switch (mutationType)
    {
    case Add:
        Wh_Log(L"Mutation type: Add");
        break;

    case Remove:
        Wh_Log(L"Mutation type: Remove");
        break;

    default:
        Wh_Log(L"Mutation type: %d", static_cast<int>(mutationType));
        break;
    }

    Wh_Log(L"Element type: %s", element.Type);

    if (mutationType == Add)
    {
        const auto inspectable = FromHandle(element.Handle);
        auto frameworkElement = inspectable.try_as<wux::FrameworkElement>();
        if (frameworkElement)
        {
            Wh_Log(L"FrameworkElement name: %s", frameworkElement.Name().c_str());
            ApplyCustomizations(element.Handle, frameworkElement, element.Type);
        }
        else
        {
            Wh_Log(L"Skipping non-FrameworkElement");
        }
    }
    else if (mutationType == Remove)
    {
        CleanupCustomizations(element.Handle);
    }

    return S_OK;
}
catch (...)
{
    HRESULT hr = winrt::to_hresult();
    Wh_Log(L"Error %08X", hr);

    // Returning an error prevents (some?) further messages, always return
    // success.
    // return hr;
    return S_OK;
}

HRESULT VisualTreeWatcher::OnElementStateChanged(InstanceHandle, VisualElementState, LPCWSTR) noexcept
{
    return S_OK;
}

#pragma endregion  // visualtreewatcher_cpp

#pragma region tap_hpp

#include <ocidl.h>

winrt::com_ptr<VisualTreeWatcher> g_visualTreeWatcher;

// {C85D8CC7-5463-40E8-A432-F5916B6427E5}
static constexpr CLSID CLSID_WindhawkTAP = { 0xc85d8cc7, 0x5463, 0x40e8, { 0xa4, 0x32, 0xf5, 0x91, 0x6b, 0x64, 0x27, 0xe5 } };

class WindhawkTAP : public winrt::implements<WindhawkTAP, IObjectWithSite, winrt::non_agile>
{
public:
    HRESULT STDMETHODCALLTYPE SetSite(IUnknown *pUnkSite) override;
    HRESULT STDMETHODCALLTYPE GetSite(REFIID riid, void **ppvSite) noexcept override;

private:
    winrt::com_ptr<IUnknown> site;
};

#pragma endregion  // tap_hpp

#pragma region tap_cpp

HRESULT WindhawkTAP::SetSite(IUnknown *pUnkSite) try
{
    // Only ever 1 VTW at once.
    if (g_visualTreeWatcher)
    {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    site.copy_from(pUnkSite);

    if (site)
    {
        // Decrease refcount increased by InitializeXamlDiagnosticsEx.
        FreeLibrary(GetCurrentModuleHandle());

        g_visualTreeWatcher = winrt::make_self<VisualTreeWatcher>(site);
    }

    return S_OK;
}
catch (...)
{
    HRESULT hr = winrt::to_hresult();
    Wh_Log(L"Error %08X", hr);
    return hr;
}

HRESULT WindhawkTAP::GetSite(REFIID riid, void **ppvSite) noexcept
{
    return site.as(riid, ppvSite);
}

#pragma endregion  // tap_cpp

#pragma region simplefactory_hpp

#include <Unknwn.h>

template<class T>
struct SimpleFactory : winrt::implements<SimpleFactory<T>, IClassFactory, winrt::non_agile>
{
    HRESULT STDMETHODCALLTYPE CreateInstance(IUnknown* pUnkOuter, REFIID riid, void** ppvObject) override try
    {
        if (!pUnkOuter)
        {
            *ppvObject = nullptr;
            return winrt::make<T>().as(riid, ppvObject);
        }
        else
        {
            return CLASS_E_NOAGGREGATION;
        }
    }
    catch (...)
    {
        HRESULT hr = winrt::to_hresult();
        Wh_Log(L"Error %08X", hr);
        return hr;
    }

    HRESULT STDMETHODCALLTYPE LockServer(BOOL) noexcept override
    {
        return S_OK;
    }
};

#pragma endregion  // simplefactory_hpp

#pragma region module_cpp

#include <combaseapi.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdll-attribute-on-redeclaration"

__declspec(dllexport)
_Use_decl_annotations_ STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv) try
{
    if (rclsid == CLSID_WindhawkTAP)
    {
        *ppv = nullptr;
        return winrt::make<SimpleFactory<WindhawkTAP>>().as(riid, ppv);
    }
    else
    {
        return CLASS_E_CLASSNOTAVAILABLE;
    }
}
catch (...)
{
    HRESULT hr = winrt::to_hresult();
    Wh_Log(L"Error %08X", hr);
    return hr;
}

__declspec(dllexport)
_Use_decl_annotations_ STDAPI DllCanUnloadNow(void)
{
    if (winrt::get_module_lock())
    {
        return S_FALSE;
    }
    else
    {
        return S_OK;
    }
}

#pragma clang diagnostic pop

#pragma endregion  // module_cpp

#pragma region api_cpp

using PFN_INITIALIZE_XAML_DIAGNOSTICS_EX = decltype(&InitializeXamlDiagnosticsEx);

HRESULT InjectWindhawkTAP() noexcept
{
    HMODULE module = GetCurrentModuleHandle();
    if (!module)
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    WCHAR location[MAX_PATH];
    switch (GetModuleFileName(module, location, ARRAYSIZE(location)))
    {
    case 0:
    case ARRAYSIZE(location):
        return HRESULT_FROM_WIN32(GetLastError());
    }

    const HMODULE wux(LoadLibraryEx(L"Windows.UI.Xaml.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32));
    if (!wux) [[unlikely]]
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    const auto ixde = reinterpret_cast<PFN_INITIALIZE_XAML_DIAGNOSTICS_EX>(GetProcAddress(wux, "InitializeXamlDiagnosticsEx"));
    if (!ixde) [[unlikely]]
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    // I didn't find a better way than trying many connections until one works.
    // Reference:
    // https://github.com/microsoft/microsoft-ui-xaml/blob/d74a0332cf0d5e58f12eddce1070fa7a79b4c2db/src/dxaml/xcp/dxaml/lib/DXamlCore.cpp#L2782
    HRESULT hr;
    for (int i = 0; i < 10000; i++)
    {
        WCHAR connectionName[256];
        wsprintf(connectionName, L"VisualDiagConnection%d", i + 1);

        hr = ixde(connectionName, GetCurrentProcessId(), L"", location, CLSID_WindhawkTAP, nullptr);
        if (hr != HRESULT_FROM_WIN32(ERROR_NOT_FOUND))
        {
            break;
        }
    }

    return hr;
}

#pragma endregion  // api_cpp

// clang-format on
////////////////////////////////////////////////////////////////////////////////

#include <list>
#include <optional>
#include <sstream>
#include <string>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <variant>
#include <vector>

using namespace std::string_view_literals;

#include <commctrl.h>
#include <roapi.h>
#include <winstring.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.Core.h>
#include <winrt/Windows.UI.Text.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Markup.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.h>

using namespace winrt::Windows::UI::Xaml;

enum class Target {
    StartMenu,
    SearchHost,
};

Target g_target;

bool g_isRedesignedStartMenu;

// https://stackoverflow.com/a/51274008
template <auto fn>
struct deleter_from_fn {
    template <typename T>
    constexpr void operator()(T* arg) const {
        fn(arg);
    }
};
using string_setting_unique_ptr =
    std::unique_ptr<const WCHAR[], deleter_from_fn<Wh_FreeStringSetting>>;

using PropertyKeyValue =
    std::pair<DependencyProperty, winrt::Windows::Foundation::IInspectable>;

using PropertyValuesUnresolved =
    std::vector<std::pair<std::wstring, std::wstring>>;
using PropertyValues = std::vector<PropertyKeyValue>;
using PropertyValuesMaybeUnresolved =
    std::variant<PropertyValuesUnresolved, PropertyValues>;

struct ElementMatcher {
    std::wstring type;
    std::wstring name;
    std::optional<std::wstring> visualStateGroupName;
    int oneBasedIndex = 0;
    PropertyValuesMaybeUnresolved propertyValues;
};

struct StyleRule {
    std::wstring name;
    std::wstring visualState;
    std::wstring value;
    bool isXamlValue = false;
};

using PropertyOverridesUnresolved = std::vector<StyleRule>;

struct XamlBlurBrushParams {
    float blurAmount;
    wf::Numerics::float4 tint;
};

using PropertyOverrideValue =
    std::variant<winrt::Windows::Foundation::IInspectable, XamlBlurBrushParams>;

// Property -> visual state -> value.
using PropertyOverrides =
    std::unordered_map<DependencyProperty,
                       std::unordered_map<std::wstring, PropertyOverrideValue>>;

using PropertyOverridesMaybeUnresolved =
    std::variant<PropertyOverridesUnresolved, PropertyOverrides>;

struct ElementCustomizationRules {
    ElementMatcher elementMatcher;
    std::vector<ElementMatcher> parentElementMatchers;
    PropertyOverridesMaybeUnresolved propertyOverrides;
};

std::vector<ElementCustomizationRules> g_elementsCustomizationRules;

struct ElementPropertyCustomizationState {
    std::optional<winrt::Windows::Foundation::IInspectable> originalValue;
    std::optional<PropertyOverrideValue> customValue;
    int64_t propertyChangedToken = 0;
};

struct ElementCustomizationStateForVisualStateGroup {
    std::unordered_map<DependencyProperty, ElementPropertyCustomizationState>
        propertyCustomizationStates;
    winrt::event_token visualStateGroupCurrentStateChangedToken;
};

struct ElementCustomizationState {
    winrt::weak_ref<FrameworkElement> element;

    // Use list to avoid reallocations on insertion, as pointers to items are
    // captured in callbacks and stored.
    std::list<std::pair<std::optional<winrt::weak_ref<VisualStateGroup>>,
                        ElementCustomizationStateForVisualStateGroup>>
        perVisualStateGroup;
};

std::unordered_map<InstanceHandle, ElementCustomizationState>
    g_elementsCustomizationState;

std::wstring g_webContentCss;
std::wstring g_webContentJs;

struct WebViewCustomizationState {
    winrt::weak_ref<FrameworkElement> element;
    bool isWebView2 = false;
    winrt::event_token navigationCompletedEventToken;
};

std::unordered_map<InstanceHandle, WebViewCustomizationState>
    g_webViewsCustomizationState;

bool g_elementPropertyModifying;

winrt::Windows::Foundation::IAsyncOperation<bool>
    g_delayedAllAppsRootVisibilitySet;

bool g_disableNewStartMenuLayout;

winrt::Windows::Foundation::IInspectable ReadLocalValueWithWorkaround(
    DependencyObject elementDo,
    DependencyProperty property) {
    const auto value = elementDo.ReadLocalValue(property);
    if (value && winrt::get_class_name(value) ==
                     L"Windows.UI.Xaml.Data.BindingExpressionBase") {
        // BindingExpressionBase was observed to be returned for XAML properties
        // that were declared as following:
        //
        // <Border ... CornerRadius="{TemplateBinding CornerRadius}" />
        //
        // Calling SetValue with it fails with an error, so we won't be able to
        // use it to restore the value. As a workaround, we use
        // GetAnimationBaseValue to get the value.
        return elementDo.GetAnimationBaseValue(property);
    }

    return value;
}

// Blur background implementation, copied from TranslucentTB.
////////////////////////////////////////////////////////////////////////////////
// clang-format off

#include <initguid.h>

#include <winrt/Windows.UI.Xaml.Hosting.h>

namespace wfn = wf::Numerics;
namespace wge = winrt::Windows::Graphics::Effects;
namespace wuc = winrt::Windows::UI::Composition;
namespace wuxh = wux::Hosting;

template <> inline constexpr winrt::guid winrt::impl::guid_v<winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>>{
    winrt::impl::guid_v<winrt::Windows::Foundation::IPropertyValue>
};

#ifndef E_BOUNDS
#define E_BOUNDS (HRESULT)(0x8000000BL)
#endif

typedef enum MY_D2D1_GAUSSIANBLUR_OPTIMIZATION
{
    MY_D2D1_GAUSSIANBLUR_OPTIMIZATION_SPEED = 0,
    MY_D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED = 1,
    MY_D2D1_GAUSSIANBLUR_OPTIMIZATION_QUALITY = 2,
    MY_D2D1_GAUSSIANBLUR_OPTIMIZATION_FORCE_DWORD = 0xffffffff

} MY_D2D1_GAUSSIANBLUR_OPTIMIZATION;

////////////////////////////////////////////////////////////////////////////////
// XamlBlurBrush.h
#include <winrt/Windows.Foundation.Numerics.h>
#include <winrt/Windows.UI.Composition.h>
#include <winrt/Windows.UI.Xaml.Media.h>

class XamlBlurBrush : public wux::Media::XamlCompositionBrushBaseT<XamlBlurBrush>
{
public:
	XamlBlurBrush(wuc::Compositor compositor, float blurAmount, wfn::float4 tint);

	void OnConnected();
	void OnDisconnected();

private:
	wuc::Compositor m_compositor;
	float m_blurAmount;
	wfn::float4 m_tint;
};

////////////////////////////////////////////////////////////////////////////////
// CompositeEffect.h
#include <d2d1effects.h>
#include <d2d1_1.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Graphics.Effects.h>
// #include <windows.graphics.effects.interop.h>

#include <windows.graphics.effects.h>
#include <sdkddkver.h>

#ifndef BUILD_WINDOWS
namespace ABI {
#endif
namespace Windows {
namespace Graphics {
namespace Effects {

typedef interface IGraphicsEffectSource                         IGraphicsEffectSource;
typedef interface IGraphicsEffectD2D1Interop                    IGraphicsEffectD2D1Interop;


typedef enum GRAPHICS_EFFECT_PROPERTY_MAPPING
{
    GRAPHICS_EFFECT_PROPERTY_MAPPING_UNKNOWN,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORX,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORY,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORZ,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORW,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_RECT_TO_VECTOR4,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_RADIANS_TO_DEGREES,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_COLORMATRIX_ALPHA_MODE,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_COLOR_TO_VECTOR3, 
    GRAPHICS_EFFECT_PROPERTY_MAPPING_COLOR_TO_VECTOR4
} GRAPHICS_EFFECT_PROPERTY_MAPPING;

//+-----------------------------------------------------------------------------
//
//  Interface:
//      IGraphicsEffectD2D1Interop
//
//  Synopsis:
//      An interface providing a Interop counterpart to IGraphicsEffect
//      and allowing for metadata queries.
//
//------------------------------------------------------------------------------

#undef INTERFACE
#define INTERFACE IGraphicsEffectD2D1Interop
DECLARE_INTERFACE_IID_(IGraphicsEffectD2D1Interop, IUnknown, "2FC57384-A068-44D7-A331-30982FCF7177")
{
    STDMETHOD(GetEffectId)(
        _Out_ GUID * id
        ) PURE;

    STDMETHOD(GetNamedPropertyMapping)(
        LPCWSTR name,
        _Out_ UINT * index,
        _Out_ GRAPHICS_EFFECT_PROPERTY_MAPPING * mapping
        ) PURE;

    STDMETHOD(GetPropertyCount)(
        _Out_ UINT * count
        ) PURE;

    STDMETHOD(GetProperty)(
        UINT index,
        _Outptr_ winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue> ** value
        ) PURE;

    STDMETHOD(GetSource)(
        UINT index,
        _Outptr_ IGraphicsEffectSource ** source
        ) PURE;

    STDMETHOD(GetSourceCount)(
        _Out_ UINT * count
        ) PURE;
};


} // namespace Effects
} // namespace Graphics
} // namespace Windows
#ifndef BUILD_WINDOWS
} // namespace ABI 
#endif

template <> inline constexpr winrt::guid winrt::impl::guid_v<ABI::Windows::Graphics::Effects::IGraphicsEffectD2D1Interop>{
    0x2FC57384, 0xA068, 0x44D7, { 0xA3, 0x31, 0x30, 0x98, 0x2F, 0xCF, 0x71, 0x77 }
};



namespace awge = ABI::Windows::Graphics::Effects;

struct CompositeEffect : winrt::implements<CompositeEffect, wge::IGraphicsEffect, wge::IGraphicsEffectSource, awge::IGraphicsEffectD2D1Interop>
{
public:
	// IGraphicsEffectD2D1Interop
	HRESULT STDMETHODCALLTYPE GetEffectId(GUID* id) noexcept override;
	HRESULT STDMETHODCALLTYPE GetNamedPropertyMapping(LPCWSTR name, UINT* index, awge::GRAPHICS_EFFECT_PROPERTY_MAPPING* mapping) noexcept override;
	HRESULT STDMETHODCALLTYPE GetPropertyCount(UINT* count) noexcept override;
	HRESULT STDMETHODCALLTYPE GetProperty(UINT index, winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>** value) noexcept override;
	HRESULT STDMETHODCALLTYPE GetSource(UINT index, awge::IGraphicsEffectSource** source) noexcept override;
	HRESULT STDMETHODCALLTYPE GetSourceCount(UINT* count) noexcept override;

	// IGraphicsEffect
	winrt::hstring Name();
	void Name(winrt::hstring name);

	std::vector<wge::IGraphicsEffectSource> Sources;
	D2D1_COMPOSITE_MODE Mode = D2D1_COMPOSITE_MODE_SOURCE_OVER;
private:
	winrt::hstring m_name = L"CompositeEffect";
};

////////////////////////////////////////////////////////////////////////////////
// CompositeEffect.cpp
HRESULT CompositeEffect::GetEffectId(GUID* id) noexcept
{
	if (id == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*id = CLSID_D2D1Composite;
	return S_OK;
}

HRESULT CompositeEffect::GetNamedPropertyMapping(LPCWSTR name, UINT* index, awge::GRAPHICS_EFFECT_PROPERTY_MAPPING* mapping) noexcept
{
	if (index == nullptr || mapping == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	const std::wstring_view nameView(name);
	if (nameView == L"Mode")
	{
		*index = D2D1_COMPOSITE_PROP_MODE;
		*mapping = awge::GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT;

		return S_OK;
	}

	return E_INVALIDARG;
}

HRESULT CompositeEffect::GetPropertyCount(UINT* count) noexcept
{
	if (count == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*count = 1;
	return S_OK;
}

HRESULT CompositeEffect::GetProperty(UINT index, winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>** value) noexcept try
{
	if (value == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	switch (index)
	{
		case D2D1_COMPOSITE_PROP_MODE:
			*value = wf::PropertyValue::CreateUInt32((UINT32)Mode).as<winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>>().detach();
			break;

		default:
			return E_BOUNDS;
	}

	return S_OK;
}
catch (...)
{
	return winrt::to_hresult();
}

HRESULT CompositeEffect::GetSource(UINT index, awge::IGraphicsEffectSource** source) noexcept try
{
	if (source == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	winrt::copy_to_abi(Sources.at(index), *reinterpret_cast<void**>(source));
	return S_OK;
}
catch (...)
{
	return winrt::to_hresult();
}

HRESULT CompositeEffect::GetSourceCount(UINT* count) noexcept
{
	if (count == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*count = static_cast<UINT>(Sources.size());
	return S_OK;
}

winrt::hstring CompositeEffect::Name()
{
	return m_name;
}

void CompositeEffect::Name(winrt::hstring name)
{
	m_name = name;
}

////////////////////////////////////////////////////////////////////////////////
// FloodEffect.h
#include <d2d1effects.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Numerics.h>
#include <winrt/Windows.Graphics.Effects.h>
// #include <windows.graphics.effects.interop.h>

namespace awge = ABI::Windows::Graphics::Effects;

struct FloodEffect : winrt::implements<FloodEffect, wge::IGraphicsEffect, wge::IGraphicsEffectSource, awge::IGraphicsEffectD2D1Interop>
{
public:
	// IGraphicsEffectD2D1Interop
	HRESULT STDMETHODCALLTYPE GetEffectId(GUID* id) noexcept override;
	HRESULT STDMETHODCALLTYPE GetNamedPropertyMapping(LPCWSTR name, UINT* index, awge::GRAPHICS_EFFECT_PROPERTY_MAPPING* mapping) noexcept override;
	HRESULT STDMETHODCALLTYPE GetPropertyCount(UINT* count) noexcept override;
	HRESULT STDMETHODCALLTYPE GetProperty(UINT index, winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>** value) noexcept override;
	HRESULT STDMETHODCALLTYPE GetSource(UINT index, awge::IGraphicsEffectSource** source) noexcept override;
	HRESULT STDMETHODCALLTYPE GetSourceCount(UINT* count) noexcept override;

	// IGraphicsEffect
	winrt::hstring Name();
	void Name(winrt::hstring name);

	wfn::float4 Color = { 0.0f, 0.0f, 0.0f, 1.0f };
private:
	winrt::hstring m_name = L"FloodEffect";
};

////////////////////////////////////////////////////////////////////////////////
// FloodEffect.cpp
HRESULT FloodEffect::GetEffectId(GUID* id) noexcept
{
	if (id == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*id = CLSID_D2D1Flood;
	return S_OK;
}

HRESULT FloodEffect::GetNamedPropertyMapping(LPCWSTR name, UINT* index, awge::GRAPHICS_EFFECT_PROPERTY_MAPPING* mapping) noexcept
{
	if (index == nullptr || mapping == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	const std::wstring_view nameView(name);
	if (nameView == L"Color")
	{
		*index = D2D1_FLOOD_PROP_COLOR;
		*mapping = awge::GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT;

		return S_OK;
	}

	return E_INVALIDARG;
}

HRESULT FloodEffect::GetPropertyCount(UINT* count) noexcept
{
	if (count == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*count = 1;
	return S_OK;
}

HRESULT FloodEffect::GetProperty(UINT index, winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>** value) noexcept try
{
	if (value == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	switch (index)
	{
		case D2D1_FLOOD_PROP_COLOR:
			*value = wf::PropertyValue::CreateSingleArray({ Color.x, Color.y, Color.z, Color.w }).as<winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>>().detach();
			break;

		default:
			return E_BOUNDS;
	}

	return S_OK;
}
catch (...)
{
	return winrt::to_hresult();
}

HRESULT FloodEffect::GetSource(UINT, awge::IGraphicsEffectSource** source) noexcept
{
	if (source == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	return E_BOUNDS;
}

HRESULT FloodEffect::GetSourceCount(UINT* count) noexcept
{
	if (count == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*count = 0;
	return S_OK;
}

winrt::hstring FloodEffect::Name()
{
	return m_name;
}

void FloodEffect::Name(winrt::hstring name)
{
	m_name = name;
}

////////////////////////////////////////////////////////////////////////////////
// GaussianBlurEffect.h
#include <d2d1effects.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Graphics.Effects.h>
// #include <windows.graphics.effects.interop.h>

namespace wge = winrt::Windows::Graphics::Effects;
namespace awge = ABI::Windows::Graphics::Effects;

struct GaussianBlurEffect : winrt::implements<GaussianBlurEffect, wge::IGraphicsEffect, wge::IGraphicsEffectSource, awge::IGraphicsEffectD2D1Interop>
{
public:
	// IGraphicsEffectD2D1Interop
	HRESULT STDMETHODCALLTYPE GetEffectId(GUID* id) noexcept override;
	HRESULT STDMETHODCALLTYPE GetNamedPropertyMapping(LPCWSTR name, UINT* index, awge::GRAPHICS_EFFECT_PROPERTY_MAPPING* mapping) noexcept override;
	HRESULT STDMETHODCALLTYPE GetPropertyCount(UINT* count) noexcept override;
	HRESULT STDMETHODCALLTYPE GetProperty(UINT index, winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>** value) noexcept override;
	HRESULT STDMETHODCALLTYPE GetSource(UINT index, awge::IGraphicsEffectSource** source) noexcept override;
	HRESULT STDMETHODCALLTYPE GetSourceCount(UINT* count) noexcept override;

	// IGraphicsEffect
	winrt::hstring Name();
	void Name(winrt::hstring name);

	wge::IGraphicsEffectSource Source;

	float BlurAmount = 3.0f;
	MY_D2D1_GAUSSIANBLUR_OPTIMIZATION Optimization = MY_D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED;
	D2D1_BORDER_MODE BorderMode = D2D1_BORDER_MODE_SOFT;
private:
	winrt::hstring m_name = L"GaussianBlurEffect";
};

////////////////////////////////////////////////////////////////////////////////
// GaussianBlurEffect.cpp
HRESULT GaussianBlurEffect::GetEffectId(GUID* id) noexcept
{
	if (id == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*id = CLSID_D2D1GaussianBlur;
	return S_OK;
}

HRESULT GaussianBlurEffect::GetNamedPropertyMapping(LPCWSTR name, UINT* index, awge::GRAPHICS_EFFECT_PROPERTY_MAPPING* mapping) noexcept
{
	if (index == nullptr || mapping == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	const std::wstring_view nameView(name);
	if (nameView == L"BlurAmount")
	{
		*index = D2D1_GAUSSIANBLUR_PROP_STANDARD_DEVIATION;
		*mapping = awge::GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT;

		return S_OK;
	}
	else if (nameView == L"Optimization")
	{
		*index = D2D1_GAUSSIANBLUR_PROP_OPTIMIZATION;
		*mapping = awge::GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT;

		return S_OK;
	}
	else if (nameView == L"BorderMode")
	{
		*index = D2D1_GAUSSIANBLUR_PROP_BORDER_MODE;
		*mapping = awge::GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT;

		return S_OK;
	}

	return E_INVALIDARG;
}

HRESULT GaussianBlurEffect::GetPropertyCount(UINT* count) noexcept
{
	if (count == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*count = 3;
	return S_OK;
}

HRESULT GaussianBlurEffect::GetProperty(UINT index, winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>** value) noexcept try
{
	if (value == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	switch (index)
	{
		case D2D1_GAUSSIANBLUR_PROP_STANDARD_DEVIATION:
			*value = wf::PropertyValue::CreateSingle(BlurAmount).as<winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>>().detach();
			break;

		case D2D1_GAUSSIANBLUR_PROP_OPTIMIZATION:
			*value = wf::PropertyValue::CreateUInt32((UINT32)Optimization).as<winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>>().detach();
			break;

		case D2D1_GAUSSIANBLUR_PROP_BORDER_MODE:
			*value = wf::PropertyValue::CreateUInt32((UINT32)BorderMode).as<winrt::impl::abi_t<winrt::Windows::Foundation::IPropertyValue>>().detach();
			break;

		default:
			return E_BOUNDS;
	}

	return S_OK;
}
catch (...)
{
	return winrt::to_hresult();
}

HRESULT GaussianBlurEffect::GetSource(UINT index, awge::IGraphicsEffectSource** source) noexcept
{
	if (source == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	if (index == 0)
	{
		winrt::copy_to_abi(Source, *reinterpret_cast<void**>(source));
		return S_OK;
	}
	else
	{
		return E_BOUNDS;
	}
}

HRESULT GaussianBlurEffect::GetSourceCount(UINT* count) noexcept
{
	if (count == nullptr) [[unlikely]]
	{
		return E_INVALIDARG;
	}

	*count = 1;
	return S_OK;
}

winrt::hstring GaussianBlurEffect::Name()
{
	return m_name;
}

void GaussianBlurEffect::Name(winrt::hstring name)
{
	m_name = name;
}

////////////////////////////////////////////////////////////////////////////////
// XamlBlurBrush.cpp
XamlBlurBrush::XamlBlurBrush(wuc::Compositor compositor, float blurAmount, wfn::float4 tint) :
	m_compositor(std::move(compositor)),
	m_blurAmount(blurAmount),
	m_tint(tint)
{ }

void XamlBlurBrush::OnConnected()
{
	if (!CompositionBrush())
	{
		auto backdropBrush = m_compositor.CreateBackdropBrush();

		auto blurEffect = winrt::make_self<GaussianBlurEffect>();
		blurEffect->Source = wuc::CompositionEffectSourceParameter(L"backdrop");
		blurEffect->BlurAmount = m_blurAmount;

		auto floodEffect = winrt::make_self<FloodEffect>();
		floodEffect->Color = m_tint;

		auto compositeEffect = winrt::make_self<CompositeEffect>();
		compositeEffect->Sources.push_back(*blurEffect);
		compositeEffect->Sources.push_back(*floodEffect);
		compositeEffect->Mode = D2D1_COMPOSITE_MODE_SOURCE_OVER;

		auto factory = m_compositor.CreateEffectFactory(*compositeEffect);
		auto blurBrush = factory.CreateBrush();
		blurBrush.SetSourceParameter(L"backdrop", backdropBrush);

		CompositionBrush(blurBrush);
	}
}

void XamlBlurBrush::OnDisconnected()
{
	if (const auto brush = CompositionBrush())
	{
		brush.Close();
		CompositionBrush(nullptr);
	}
}

// clang-format on
////////////////////////////////////////////////////////////////////////////////

void SetOrClearValue(DependencyObject elementDo,
                     DependencyProperty property,
                     const PropertyOverrideValue& overrideValue,
                     bool initialApply = false) {
    winrt::Windows::Foundation::IInspectable value;
    if (auto* inspectable =
            std::get_if<winrt::Windows::Foundation::IInspectable>(
                &overrideValue)) {
        value = *inspectable;
    } else if (auto* blurBrushParams =
                   std::get_if<XamlBlurBrushParams>(&overrideValue)) {
        if (auto uiElement = elementDo.try_as<UIElement>()) {
            auto compositor =
                wuxh::ElementCompositionPreview::GetElementVisual(uiElement)
                    .Compositor();

            value = winrt::make<XamlBlurBrush>(std::move(compositor),
                                               blurBrushParams->blurAmount,
                                               blurBrushParams->tint);
        } else {
            Wh_Log(L"Can't get UIElement for blur brush");
            return;
        }
    } else {
        Wh_Log(L"Unsupported override value");
        return;
    }

    // Below is a workaround to the following bug: If the AllAppsRoot Grid is
    // made visible too early, it becomes truncated such that only the part
    // that's visible without scrolling is accessible. The rest of the content
    // is blank. Delaying the property setting seems to fix it. See:
    // https://github.com/ramensoftware/windhawk-mods/issues/1335
    if (winrt::get_class_name(elementDo) == L"Windows.UI.Xaml.Controls.Grid" &&
        elementDo.as<FrameworkElement>().Name() == L"AllAppsRoot" &&
        property == UIElement::VisibilityProperty()) {
        if (value != DependencyProperty::UnsetValue() && initialApply &&
            !g_delayedAllAppsRootVisibilitySet) {
            Wh_Log(L"Delaying SetValue for AllAppsRoot");
            g_delayedAllAppsRootVisibilitySet =
                elementDo.Dispatcher().TryRunAsync(
                    winrt::Windows::UI::Core::CoreDispatcherPriority::High,
                    [elementDo = std::move(elementDo),
                     property = std::move(property),
                     value = std::move(value)]() {
                        Wh_Log(L"Running delayed SetValue for AllAppsRoot");
                        try {
                            elementDo.SetValue(property, value);
                        } catch (winrt::hresult_error const& ex) {
                            Wh_Log(L"Error %08X: %s", ex.code(),
                                   ex.message().c_str());
                        }
                        g_delayedAllAppsRootVisibilitySet = nullptr;
                    });
            return;
        } else if (g_delayedAllAppsRootVisibilitySet) {
            Wh_Log(L"Canceling delayed SetValue for AllAppsRoot");
            g_delayedAllAppsRootVisibilitySet.Cancel();
            g_delayedAllAppsRootVisibilitySet = nullptr;
        }
    }

    if (value == DependencyProperty::UnsetValue()) {
        elementDo.ClearValue(property);
        return;
    }

    // This might fail. See `ReadLocalValueWithWorkaround` for an example (which
    // we now handle but there might be other cases).
    try {
        // `setter.Value()` returns font weight as an int. Using it with
        // `SetValue` results in the following error: 0x80004002 (No such
        // interface supported). Box it as `Windows.UI.Text.FontWeight` as a
        // workaround.
        if (property == Controls::TextBlock::FontWeightProperty() ||
            property == Controls::Control::FontWeightProperty()) {
            auto valueInt = value.try_as<int>();
            if (valueInt && *valueInt >= std::numeric_limits<uint16_t>::min() &&
                *valueInt <= std::numeric_limits<uint16_t>::max()) {
                value = winrt::box_value(winrt::Windows::UI::Text::FontWeight{
                    static_cast<uint16_t>(*valueInt)});
            }
        }

        elementDo.SetValue(property, value);
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
    }
}

// https://stackoverflow.com/a/5665377
std::wstring EscapeXmlAttribute(std::wstring_view data) {
    std::wstring buffer;
    buffer.reserve(data.size());
    for (const auto c : data) {
        switch (c) {
            case '&':
                buffer.append(L"&amp;");
                break;
            case '\"':
                buffer.append(L"&quot;");
                break;
            // case '\'':
            //     buffer.append(L"&apos;");
            //     break;
            case '<':
                buffer.append(L"&lt;");
                break;
            case '>':
                buffer.append(L"&gt;");
                break;
            default:
                buffer.push_back(c);
                break;
        }
    }

    return buffer;
}

// https://stackoverflow.com/a/54364173
std::wstring_view TrimStringView(std::wstring_view s) {
    s.remove_prefix(std::min(s.find_first_not_of(L" \t\r\v\n"), s.size()));
    s.remove_suffix(
        std::min(s.size() - s.find_last_not_of(L" \t\r\v\n") - 1, s.size()));
    return s;
}

// https://stackoverflow.com/a/46931770
std::vector<std::wstring_view> SplitStringView(std::wstring_view s,
                                               std::wstring_view delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::wstring_view token;
    std::vector<std::wstring_view> res;

    while ((pos_end = s.find(delimiter, pos_start)) !=
           std::wstring_view::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

std::optional<PropertyOverrideValue> ParseNonXamlPropertyOverrideValue(
    std::wstring_view stringValue) {
    // Example:
    // <WindhawkBlur BlurAmount="10" TintColor="#FFFF0000"/>

    auto substr = TrimStringView(stringValue);

    constexpr auto kWindhawkBlurPrefix = L"<WindhawkBlur "sv;
    if (!substr.starts_with(kWindhawkBlurPrefix)) {
        return std::nullopt;
    }
    Wh_Log(L"%.*s", static_cast<int>(substr.length()), substr.data());
    substr = substr.substr(std::size(kWindhawkBlurPrefix));

    constexpr auto kWindhawkBlurSuffix = L"/>"sv;
    if (!substr.ends_with(kWindhawkBlurSuffix)) {
        throw std::runtime_error("WindhawkBlur: Bad suffix");
    }
    substr = substr.substr(0, substr.size() - std::size(kWindhawkBlurSuffix));

    bool pendingTintColorThemeResource = false;
    wf::Numerics::float4 tint{};
    float tintOpacity = std::numeric_limits<float>::quiet_NaN();
    float blurAmount = 0;

    constexpr auto kTintColorThemeResourcePrefix =
        L"TintColor=\"{ThemeResource"sv;
    constexpr auto kTintColorThemeResourceSuffix = L"}\""sv;
    constexpr auto kTintColorPrefix = L"TintColor=\"#"sv;
    constexpr auto kTintOpacityPrefix = L"TintOpacity=\""sv;
    constexpr auto kBlurAmountPrefix = L"BlurAmount=\""sv;
    for (const auto prop : SplitStringView(substr, L" ")) {
        const auto propSubstr = TrimStringView(prop);
        if (propSubstr.empty()) {
            continue;
        }

        Wh_Log(L"  %.*s", static_cast<int>(propSubstr.length()),
               propSubstr.data());

        if (pendingTintColorThemeResource) {
            if (!propSubstr.ends_with(kTintColorThemeResourceSuffix)) {
                throw std::runtime_error(
                    "WindhawkBlur: Invalid TintColor theme resource syntax");
            }

            pendingTintColorThemeResource = false;

            auto themeResourceName = propSubstr.substr(
                0,
                propSubstr.size() - std::size(kTintColorThemeResourceSuffix));

            auto resources = Application::Current().Resources();
            auto resource = resources.TryLookup(
                winrt::box_value(winrt::hstring(themeResourceName)));
            if (resource) {
                if (auto colorBrush =
                        resource.try_as<wux::Media::SolidColorBrush>()) {
                    auto color = colorBrush.Color();
                    tint = {color.R / 255.0f, color.G / 255.0f,
                            color.B / 255.0f, color.A / 255.0f};
                } else if (auto color =
                               resource.try_as<winrt::Windows::UI::Color>()) {
                    tint = {color->R / 255.0f, color->G / 255.0f,
                            color->B / 255.0f, color->A / 255.0f};
                } else {
                    Wh_Log(L"Resource type is unsupported: %s",
                           winrt::get_class_name(resource).c_str());
                }
            } else {
                Wh_Log(L"Failed to find resource");
            }

            continue;
        }

        if (propSubstr == kTintColorThemeResourcePrefix) {
            pendingTintColorThemeResource = true;
            continue;
        }

        if (propSubstr.starts_with(kTintColorPrefix) &&
            propSubstr.back() == L'\"') {
            auto valStr = propSubstr.substr(
                std::size(kTintColorPrefix),
                propSubstr.size() - std::size(kTintColorPrefix) - 1);

            bool hasAlpha;
            switch (valStr.size()) {
                case 6:
                    hasAlpha = false;
                    break;
                case 8:
                    hasAlpha = true;
                    break;
                default:
                    throw std::runtime_error(
                        "WindhawkBlur: Unsupported TintColor value");
            }

            auto valNum = std::stoul(std::wstring(valStr), nullptr, 16);
            uint8_t a = hasAlpha ? HIBYTE(HIWORD(valNum)) : 255;
            uint8_t r = LOBYTE(HIWORD(valNum));
            uint8_t g = HIBYTE(LOWORD(valNum));
            uint8_t b = LOBYTE(LOWORD(valNum));
            tint = {r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f};
            continue;
        }

        if (propSubstr.starts_with(kTintOpacityPrefix) &&
            propSubstr.back() == L'\"') {
            auto valStr = propSubstr.substr(
                std::size(kTintOpacityPrefix),
                propSubstr.size() - std::size(kTintOpacityPrefix) - 1);
            tintOpacity = std::stof(std::wstring(valStr));
            continue;
        }

        if (propSubstr.starts_with(kBlurAmountPrefix) &&
            propSubstr.back() == L'\"') {
            auto valStr = propSubstr.substr(
                std::size(kBlurAmountPrefix),
                propSubstr.size() - std::size(kBlurAmountPrefix) - 1);
            blurAmount = std::stof(std::wstring(valStr));
            continue;
        }

        throw std::runtime_error("WindhawkBlur: Bad property");
    }

    if (pendingTintColorThemeResource) {
        throw std::runtime_error(
            "WindhawkBlur: Unterminated TintColor theme resource");
    }

    if (!std::isnan(tintOpacity)) {
        if (tintOpacity < 0.0f) {
            tintOpacity = 0.0f;
        } else if (tintOpacity > 1.0f) {
            tintOpacity = 1.0f;
        }

        tint.w = tintOpacity;
    }

    return XamlBlurBrushParams{
        .blurAmount = blurAmount,
        .tint = tint,
    };
}

Style GetStyleFromXamlSetters(const std::wstring_view type,
                              const std::wstring_view xamlStyleSetters) {
    std::wstring xaml =
        LR"(<ResourceDictionary
    xmlns="http://schemas.microsoft.com/winfx/2006/xaml/presentation"
    xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
    xmlns:d="http://schemas.microsoft.com/expression/blend/2008"
    xmlns:mc="http://schemas.openxmlformats.org/markup-compatibility/2006"
    xmlns:muxc="using:Microsoft.UI.Xaml.Controls")";

    if (auto pos = type.rfind('.'); pos != type.npos) {
        auto typeNamespace = std::wstring_view(type).substr(0, pos);
        auto typeName = std::wstring_view(type).substr(pos + 1);

        xaml += L"\n    xmlns:windhawkstyler=\"using:";
        xaml += EscapeXmlAttribute(typeNamespace);
        xaml +=
            L"\">\n"
            L"    <Style TargetType=\"windhawkstyler:";
        xaml += EscapeXmlAttribute(typeName);
        xaml += L"\">\n";
    } else {
        xaml +=
            L">\n"
            L"    <Style TargetType=\"";
        xaml += EscapeXmlAttribute(type);
        xaml += L"\">\n";
    }

    xaml += xamlStyleSetters;

    xaml +=
        L"    </Style>\n"
        L"</ResourceDictionary>";

    Wh_Log(L"======================================== XAML:");
    std::wstringstream ss(xaml);
    std::wstring line;
    while (std::getline(ss, line, L'\n')) {
        Wh_Log(L"%s", line.c_str());
    }
    Wh_Log(L"========================================");

    auto resourceDictionary =
        Markup::XamlReader::Load(xaml).as<ResourceDictionary>();

    auto [styleKey, styleInspectable] = resourceDictionary.First().Current();
    return styleInspectable.as<Style>();
}

Style GetStyleFromXamlSettersWithFallbackType(
    const std::wstring_view type,
    const std::wstring_view fallbackType,
    const std::wstring_view xamlStyleSetters) {
    try {
        return GetStyleFromXamlSetters(type, xamlStyleSetters);
    } catch (winrt::hresult_error const& ex) {
        constexpr HRESULT kStowedException = 0x802B000A;
        if (ex.code() != kStowedException || fallbackType.empty() ||
            fallbackType == type) {
            throw;
        }

        // For some types such as JumpViewUI.JumpListListViewItem, the following
        // error is returned:
        //
        // Error 802B000A: Failed to create a 'System.Type' from the text
        // 'windhawkstyler:JumpListListViewItem'. [Line: 8 Position: 12]
        //
        // Retry with a fallback type, which will allow to at least use the
        // basic properties.
        Wh_Log(L"Retrying with fallback type type due to error %08X: %s",
               ex.code(), ex.message().c_str());
        return GetStyleFromXamlSetters(fallbackType, xamlStyleSetters);
    }
}

const PropertyOverrides& GetResolvedPropertyOverrides(
    const std::wstring_view type,
    const std::wstring_view fallbackType,
    PropertyOverridesMaybeUnresolved* propertyOverridesMaybeUnresolved) {
    if (const auto* resolved =
            std::get_if<PropertyOverrides>(propertyOverridesMaybeUnresolved)) {
        return *resolved;
    }

    PropertyOverrides propertyOverrides;

    try {
        const auto& styleRules = std::get<PropertyOverridesUnresolved>(
            *propertyOverridesMaybeUnresolved);
        if (!styleRules.empty()) {
            std::wstring xaml;

            std::vector<std::optional<PropertyOverrideValue>>
                propertyOverrideValues;
            propertyOverrideValues.reserve(styleRules.size());

            for (const auto& rule : styleRules) {
                propertyOverrideValues.push_back(
                    rule.isXamlValue
                        ? ParseNonXamlPropertyOverrideValue(rule.value)
                        : std::nullopt);

                xaml += L"        <Setter Property=\"";
                xaml += EscapeXmlAttribute(rule.name);
                xaml += L"\"";
                if (propertyOverrideValues.back() ||
                    (rule.isXamlValue && rule.value.empty())) {
                    xaml += L" Value=\"{x:Null}\" />\n";
                } else if (!rule.isXamlValue) {
                    xaml += L" Value=\"";
                    xaml += EscapeXmlAttribute(rule.value);
                    xaml += L"\" />\n";
                } else {
                    xaml +=
                        L">\n"
                        L"            <Setter.Value>\n";
                    xaml += rule.value;
                    xaml +=
                        L"\n"
                        L"            </Setter.Value>\n"
                        L"        </Setter>\n";
                }
            }

            auto style = GetStyleFromXamlSettersWithFallbackType(
                type, fallbackType, xaml);

            uint32_t i = 0;
            for (const auto& rule : styleRules) {
                const auto setter = style.Setters().GetAt(i).as<Setter>();
                propertyOverrides[setter.Property()][rule.visualState] =
                    propertyOverrideValues[i].value_or(
                        rule.isXamlValue && rule.value.empty()
                            ? DependencyProperty::UnsetValue()
                            : setter.Value());
                i++;
            }
        }

        Wh_Log(L"%.*s: %zu override styles", static_cast<int>(type.length()),
               type.data(), propertyOverrides.size());
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
    } catch (std::exception const& ex) {
        Wh_Log(L"Error: %S", ex.what());
    }

    *propertyOverridesMaybeUnresolved = std::move(propertyOverrides);
    return std::get<PropertyOverrides>(*propertyOverridesMaybeUnresolved);
}

const PropertyValues& GetResolvedPropertyValues(
    const std::wstring_view type,
    const std::wstring_view fallbackType,
    PropertyValuesMaybeUnresolved* propertyValuesMaybeUnresolved) {
    if (const auto* resolved =
            std::get_if<PropertyValues>(propertyValuesMaybeUnresolved)) {
        return *resolved;
    }

    PropertyValues propertyValues;

    try {
        const auto& propertyValuesStr =
            std::get<PropertyValuesUnresolved>(*propertyValuesMaybeUnresolved);
        if (!propertyValuesStr.empty()) {
            std::wstring xaml;

            for (const auto& [property, value] : propertyValuesStr) {
                xaml += L"        <Setter Property=\"";
                xaml += EscapeXmlAttribute(property);
                xaml += L"\" Value=\"";
                xaml += EscapeXmlAttribute(value);
                xaml += L"\" />\n";
            }

            auto style = GetStyleFromXamlSettersWithFallbackType(
                type, fallbackType, xaml);

            for (size_t i = 0; i < propertyValuesStr.size(); i++) {
                const auto setter = style.Setters().GetAt(i).as<Setter>();
                propertyValues.push_back({
                    setter.Property(),
                    setter.Value(),
                });
            }
        }

        Wh_Log(L"%.*s: %zu matcher styles", static_cast<int>(type.length()),
               type.data(), propertyValues.size());
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
    } catch (std::exception const& ex) {
        Wh_Log(L"Error: %S", ex.what());
    }

    *propertyValuesMaybeUnresolved = std::move(propertyValues);
    return std::get<PropertyValues>(*propertyValuesMaybeUnresolved);
}

// https://stackoverflow.com/a/12835139
VisualStateGroup GetVisualStateGroup(FrameworkElement element,
                                     std::wstring_view visualStateGroupName) {
    auto list = VisualStateManager::GetVisualStateGroups(element);

    for (const auto& v : list) {
        if (v.Name() == visualStateGroupName) {
            return v;
        }
    }

    return nullptr;
}

bool TestElementMatcher(FrameworkElement element,
                        ElementMatcher& matcher,
                        VisualStateGroup* visualStateGroup,
                        PCWSTR fallbackClassName) {
    if (!matcher.type.empty() &&
        matcher.type != winrt::get_class_name(element) &&
        (!fallbackClassName || matcher.type != fallbackClassName)) {
        return false;
    }

    if (!matcher.name.empty() && matcher.name != element.Name()) {
        return false;
    }

    if (matcher.oneBasedIndex) {
        auto parent = Media::VisualTreeHelper::GetParent(element);
        if (!parent) {
            return false;
        }

        int index = matcher.oneBasedIndex - 1;
        if (index < 0 ||
            index >= Media::VisualTreeHelper::GetChildrenCount(parent) ||
            Media::VisualTreeHelper::GetChild(parent, index) != element) {
            return false;
        }
    }

    auto elementDo = element.as<DependencyObject>();

    for (const auto& propertyValue : GetResolvedPropertyValues(
             matcher.type,
             fallbackClassName ? fallbackClassName
                               : winrt::name_of<FrameworkElement>(),
             &matcher.propertyValues)) {
        const auto value =
            ReadLocalValueWithWorkaround(elementDo, propertyValue.first);
        if (!value) {
            Wh_Log(L"Null property value");
            return false;
        }

        const auto className = winrt::get_class_name(value);
        const auto expectedClassName =
            winrt::get_class_name(propertyValue.second);
        if (className != expectedClassName) {
            Wh_Log(L"Different property class: %s vs. %s", className.c_str(),
                   expectedClassName.c_str());
            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<String>") {
            if (winrt::unbox_value<winrt::hstring>(propertyValue.second) ==
                winrt::unbox_value<winrt::hstring>(value)) {
                continue;
            }

            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<Double>") {
            if (winrt::unbox_value<double>(propertyValue.second) ==
                winrt::unbox_value<double>(value)) {
                continue;
            }

            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<Boolean>") {
            if (winrt::unbox_value<bool>(propertyValue.second) ==
                winrt::unbox_value<bool>(value)) {
                continue;
            }

            return false;
        }

        Wh_Log(L"Unsupported property class: %s", className.c_str());
        return false;
    }

    if (matcher.visualStateGroupName && visualStateGroup) {
        *visualStateGroup =
            GetVisualStateGroup(element, *matcher.visualStateGroupName);
    }

    return true;
}

std::unordered_map<VisualStateGroup, PropertyOverrides>
FindElementPropertyOverrides(FrameworkElement element,
                             PCWSTR fallbackClassName) {
    std::unordered_map<VisualStateGroup, PropertyOverrides> overrides;
    std::unordered_set<DependencyProperty> propertiesAdded;

    for (auto it = g_elementsCustomizationRules.rbegin();
         it != g_elementsCustomizationRules.rend(); ++it) {
        auto& override = *it;

        VisualStateGroup visualStateGroup = nullptr;

        if (!TestElementMatcher(element, override.elementMatcher,
                                &visualStateGroup, fallbackClassName)) {
            continue;
        }

        auto parentElementIter = element;
        bool parentElementMatchFailed = false;

        for (auto& matcher : override.parentElementMatchers) {
            // Using parentElementIter.Parent() was sometimes returning null.
            parentElementIter =
                Media::VisualTreeHelper::GetParent(parentElementIter)
                    .try_as<FrameworkElement>();
            if (!parentElementIter) {
                parentElementMatchFailed = true;
                break;
            }

            if (!TestElementMatcher(parentElementIter, matcher,
                                    &visualStateGroup, nullptr)) {
                parentElementMatchFailed = true;
                break;
            }
        }

        if (parentElementMatchFailed) {
            continue;
        }

        auto& overridesForVisualStateGroup = overrides[visualStateGroup];
        for (const auto& [property, valuesPerVisualState] :
             GetResolvedPropertyOverrides(
                 override.elementMatcher.type,
                 fallbackClassName ? fallbackClassName
                                   : winrt::name_of<FrameworkElement>(),
                 &override.propertyOverrides)) {
            bool propertyInserted = propertiesAdded.insert(property).second;
            if (!propertyInserted) {
                continue;
            }

            auto& propertyOverrides = overridesForVisualStateGroup[property];
            for (const auto& [visualState, value] : valuesPerVisualState) {
                propertyOverrides.insert({visualState, value});
            }
        }
    }

    std::erase_if(overrides, [](const auto& item) {
        auto const& [key, value] = item;
        return value.empty();
    });

    return overrides;
}

void ApplyCustomizationsForVisualStateGroup(
    FrameworkElement element,
    VisualStateGroup visualStateGroup,
    PropertyOverrides propertyOverrides,
    ElementCustomizationStateForVisualStateGroup*
        elementCustomizationStateForVisualStateGroup) {
    auto elementDo = element.as<DependencyObject>();

    VisualState currentVisualState(
        visualStateGroup ? visualStateGroup.CurrentState() : nullptr);

    std::wstring currentVisualStateName(
        currentVisualState ? currentVisualState.Name() : L"");

    for (const auto& [property, valuesPerVisualState] : propertyOverrides) {
        const auto [propertyCustomizationStatesIt, inserted] =
            elementCustomizationStateForVisualStateGroup
                ->propertyCustomizationStates.insert({property, {}});
        if (!inserted) {
            continue;
        }

        auto& propertyCustomizationState =
            propertyCustomizationStatesIt->second;

        auto it = valuesPerVisualState.find(currentVisualStateName);
        if (it == valuesPerVisualState.end() &&
            !currentVisualStateName.empty()) {
            it = valuesPerVisualState.find(L"");
        }

        if (it != valuesPerVisualState.end()) {
            propertyCustomizationState.originalValue =
                ReadLocalValueWithWorkaround(element, property);
            propertyCustomizationState.customValue = it->second;
            SetOrClearValue(element, property, it->second,
                            /*initialApply=*/true);
        }

        propertyCustomizationState
            .propertyChangedToken = elementDo.RegisterPropertyChangedCallback(
            property,
            [&propertyCustomizationState](DependencyObject sender,
                                          DependencyProperty property) {
                if (g_elementPropertyModifying) {
                    return;
                }

                auto element = sender.try_as<FrameworkElement>();
                if (!element) {
                    return;
                }

                if (!propertyCustomizationState.customValue) {
                    return;
                }

                Wh_Log(L"Re-applying style for %s",
                       winrt::get_class_name(element).c_str());

                auto localValue =
                    ReadLocalValueWithWorkaround(element, property);

                if (auto* customValue =
                        std::get_if<winrt::Windows::Foundation::IInspectable>(
                            &*propertyCustomizationState.customValue)) {
                    if (*customValue != localValue) {
                        propertyCustomizationState.originalValue = localValue;
                    }
                }

                g_elementPropertyModifying = true;
                SetOrClearValue(element, property,
                                *propertyCustomizationState.customValue);
                g_elementPropertyModifying = false;
            });
    }

    if (visualStateGroup) {
        winrt::weak_ref<FrameworkElement> elementWeakRef = element;
        elementCustomizationStateForVisualStateGroup
            ->visualStateGroupCurrentStateChangedToken =
            visualStateGroup.CurrentStateChanged(
                [elementWeakRef, propertyOverrides,
                 elementCustomizationStateForVisualStateGroup](
                    winrt::Windows::Foundation::IInspectable const& sender,
                    VisualStateChangedEventArgs const& e) {
                    auto element = elementWeakRef.get();
                    if (!element) {
                        return;
                    }

                    Wh_Log(L"Re-applying all styles for %s",
                           winrt::get_class_name(element).c_str());

                    g_elementPropertyModifying = true;

                    auto& propertyCustomizationStates =
                        elementCustomizationStateForVisualStateGroup
                            ->propertyCustomizationStates;

                    for (const auto& [property, valuesPerVisualState] :
                         propertyOverrides) {
                        auto& propertyCustomizationState =
                            propertyCustomizationStates.at(property);

                        auto newState = e.NewState();
                        auto newStateName =
                            std::wstring{newState ? newState.Name() : L""};
                        auto it = valuesPerVisualState.find(newStateName);
                        if (it == valuesPerVisualState.end()) {
                            it = valuesPerVisualState.find(L"");
                            if (it != valuesPerVisualState.end()) {
                                auto oldState = e.OldState();
                                auto oldStateName = std::wstring{
                                    oldState ? oldState.Name() : L""};
                                if (!valuesPerVisualState.contains(
                                        oldStateName)) {
                                    continue;
                                }
                            }
                        }

                        if (it != valuesPerVisualState.end()) {
                            if (!propertyCustomizationState.originalValue) {
                                propertyCustomizationState.originalValue =
                                    ReadLocalValueWithWorkaround(element,
                                                                 property);
                            }

                            propertyCustomizationState.customValue = it->second;
                            SetOrClearValue(element, property, it->second);
                        } else {
                            if (propertyCustomizationState.originalValue) {
                                SetOrClearValue(
                                    element, property,
                                    *propertyCustomizationState.originalValue);
                                propertyCustomizationState.originalValue
                                    .reset();
                            }

                            propertyCustomizationState.customValue.reset();
                        }
                    }

                    g_elementPropertyModifying = false;
                });
    }
}

void RestoreCustomizationsForVisualStateGroup(
    FrameworkElement element,
    std::optional<winrt::weak_ref<VisualStateGroup>>
        visualStateGroupOptionalWeakPtr,
    const ElementCustomizationStateForVisualStateGroup&
        elementCustomizationStateForVisualStateGroup) {
    if (element) {
        for (const auto& [property, state] :
             elementCustomizationStateForVisualStateGroup
                 .propertyCustomizationStates) {
            element.UnregisterPropertyChangedCallback(
                property, state.propertyChangedToken);

            if (state.originalValue) {
                SetOrClearValue(element, property, *state.originalValue);
            }
        }
    }

    auto visualStateGroupIter = visualStateGroupOptionalWeakPtr
                                    ? visualStateGroupOptionalWeakPtr->get()
                                    : nullptr;
    if (visualStateGroupIter && elementCustomizationStateForVisualStateGroup
                                    .visualStateGroupCurrentStateChangedToken) {
        visualStateGroupIter.CurrentStateChanged(
            elementCustomizationStateForVisualStateGroup
                .visualStateGroupCurrentStateChangedToken);
    }
}

// winrt::WebView2Standalone::Controls::IWebView2
// 59C47E46-CC96-525F-A17C-2C213F988447
constexpr winrt::guid IID_WebView2Standalone_IWebView2{
    0x59C47E46,
    0xCC96,
    0x525F,
    {0xA1, 0x7C, 0x2C, 0x21, 0x3F, 0x98, 0x84, 0x47}};

// 4865E238-036A-5664-95A3-447EC44CF498
constexpr winrt::guid IID_ICoreWebView2NavigationCompletedEventArgs{
    0x4865E238,
    0x036A,
    0x5664,
    {0x95, 0xA3, 0x44, 0x7E, 0xC4, 0x4C, 0xF4, 0x98}};

// clang-format off
struct WebView2Standalone_IWebView2 : ::IInspectable {
    virtual int32_t __stdcall get_CoreWebView2(void**) noexcept = 0;
    virtual int32_t __stdcall get_CoreWebView2Controller(void**) noexcept = 0;
    virtual int32_t __stdcall EnsureCoreWebView2Async(void**) noexcept = 0;
    virtual int32_t __stdcall ExecuteScriptAsync(void*, void**) noexcept = 0;
    virtual int32_t __stdcall get_Source(void**) noexcept = 0;
    virtual int32_t __stdcall put_Source(void*) noexcept = 0;
    virtual int32_t __stdcall get_CanGoForward(bool*) noexcept = 0;
    virtual int32_t __stdcall put_CanGoForward(bool) noexcept = 0;
    virtual int32_t __stdcall get_CanGoBack(bool*) noexcept = 0;
    virtual int32_t __stdcall put_CanGoBack(bool) noexcept = 0;
    virtual int32_t __stdcall Reload() noexcept = 0;
    virtual int32_t __stdcall GoForward() noexcept = 0;
    virtual int32_t __stdcall GoBack() noexcept = 0;
    virtual int32_t __stdcall NavigateToString(void*) noexcept = 0;
    virtual int32_t __stdcall Close() noexcept = 0;
    virtual int32_t __stdcall add_NavigationCompleted(void*, winrt::event_token*) noexcept = 0;
    virtual int32_t __stdcall remove_NavigationCompleted(winrt::event_token) noexcept = 0;
    virtual int32_t __stdcall add_WebMessageReceived(void*, winrt::event_token*) noexcept = 0;
    virtual int32_t __stdcall remove_WebMessageReceived(winrt::event_token) noexcept = 0;
    virtual int32_t __stdcall add_NavigationStarting(void*, winrt::event_token*) noexcept = 0;
    virtual int32_t __stdcall remove_NavigationStarting(winrt::event_token) noexcept = 0;
    virtual int32_t __stdcall add_CoreProcessFailed(void*, winrt::event_token*) noexcept = 0;
    virtual int32_t __stdcall remove_CoreProcessFailed(winrt::event_token) noexcept = 0;
    virtual int32_t __stdcall add_CoreWebView2Initialized(void*, winrt::event_token*) noexcept = 0;
    virtual int32_t __stdcall remove_CoreWebView2Initialized(winrt::event_token) noexcept = 0;
};

struct ICoreWebView2NavigationCompletedEventArgs : ::IInspectable {
    virtual int32_t __stdcall get_IsSuccess(bool*) noexcept = 0;
    virtual int32_t __stdcall get_WebErrorStatus(int32_t*) noexcept = 0;
    virtual int32_t __stdcall get_NavigationId(uint64_t*) noexcept = 0;
};
// clang-format on

std::wstring EscapeJsTemplateString(std::wstring_view str) {
    std::wstring buffer;
    buffer.reserve(str.size());
    for (const auto c : str) {
        switch (c) {
            case '\\':
                buffer.append(L"\\\\");
                break;
            case '`':
                buffer.append(L"\\`");
                break;
            default:
                buffer.push_back(c);
                break;
        }
    }

    return buffer;
}

std::wstring CreateWebViewJsCodeForApply() {
    std::wstring jsCode =
        LR"(
        (() => {
        const styleElementId = "windhawk-windows-11-start-menu-styler-style";
        const styleContent = `
    )";

    jsCode += EscapeJsTemplateString(g_webContentCss);

    jsCode +=
        LR"(
        `;
        if (!document.getElementById(styleElementId)) {
            const style = document.createElement("style");
            style.id = styleElementId;
            style.textContent = styleContent;
            document.head.appendChild(style);
        }
    )";

    jsCode += g_webContentJs;

    jsCode +=
        LR"(
        })();
    )";

    Wh_Log(L"======================================== JS:");
    std::wstringstream ss(jsCode);
    std::wstring line;
    while (std::getline(ss, line, L'\n')) {
        Wh_Log(L"%s", line.c_str());
    }
    Wh_Log(L"========================================");

    return jsCode;
}

bool ApplyWebViewStyleCustomizations(Controls::WebView webViewElement) {
    auto source = webViewElement.Source();
    if (!source) {
        return false;
    }

    auto canonicalUri = source.AbsoluteCanonicalUri();
    Wh_Log(L"WebView source: %s", canonicalUri.c_str());

    if (canonicalUri != L"https://www.bing.com/WS/Init" &&
        // Offline content (DisableSearchBoxSuggestions registry option).
        canonicalUri !=
            L"ms-appx-web://microsoftwindows.client.cbs/Cortana.UI/cache/"
            L"svlocal/desktop/2.html" &&
        // Windows 10 (SearchApp.exe).
        canonicalUri !=
            L"https://www.bing.com/AS/API/WindowsCortanaPane/V2/Init" &&
        canonicalUri !=
            L"ms-appx-web://microsoft.windows.search/cache/local/desktop/"
            L"2.html") {
        return false;
    }

    std::wstring jsCode = CreateWebViewJsCodeForApply();

    webViewElement.InvokeScriptAsync(
        L"eval", winrt::single_threaded_vector<winrt::hstring>(
                     {winrt::hstring(jsCode.c_str(), jsCode.size())}));

    return true;
}

bool ApplyWebView2StyleCustomizations(
    WebView2Standalone_IWebView2* webViewElement) {
    void* sourcePtr;
    winrt::check_hresult(webViewElement->get_Source(&sourcePtr));
    auto source = winrt::Windows::Foundation::Uri{
        sourcePtr, winrt::take_ownership_from_abi};
    if (!source) {
        return false;
    }

    auto canonicalUri = source.AbsoluteCanonicalUri();
    Wh_Log(L"WebView source: %s", canonicalUri.c_str());

    if (canonicalUri != L"https://www.bing.com/WS/Init" &&
        // Offline content (DisableSearchBoxSuggestions registry option).
        canonicalUri !=
            L"https://searchapp.bundleassets.example/desktop/2.html") {
        return false;
    }

    std::wstring jsCode = CreateWebViewJsCodeForApply();

    void* operationPtr;
    auto jsCodeHstring = winrt::hstring(jsCode.c_str(), jsCode.size());
    winrt::check_hresult(webViewElement->ExecuteScriptAsync(
        *(void**)(&jsCodeHstring), &operationPtr));
    auto operation =
        winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>{
            operationPtr, winrt::take_ownership_from_abi};

    return true;
}

void ApplyCustomizationsIfWebView(InstanceHandle handle,
                                  FrameworkElement element) {
    auto className = winrt::get_class_name(element);
    if (className == L"Windows.UI.Xaml.Controls.WebView") {
        auto& webViewCustomizationState = g_webViewsCustomizationState[handle];
        if (!webViewCustomizationState.element.get()) {
            webViewCustomizationState.element = element;

            auto webViewElement = element.as<Controls::WebView>();

            ApplyWebViewStyleCustomizations(webViewElement);

            webViewCustomizationState.navigationCompletedEventToken =
                webViewElement.NavigationCompleted(
                    [](const Controls::WebView& sender,
                       const Controls::WebViewNavigationCompletedEventArgs&
                           args) {
                        if (args.IsSuccess()) {
                            ApplyWebViewStyleCustomizations(sender);
                        }
                    });
        }
    } else if (className == L"WebView2Standalone.Controls.WebView2") {
        auto& webViewCustomizationState = g_webViewsCustomizationState[handle];
        if (!webViewCustomizationState.element.get()) {
            webViewCustomizationState.element = element;
            webViewCustomizationState.isWebView2 = true;

            winrt::com_ptr<WebView2Standalone_IWebView2> webViewElement;
            winrt::check_hresult(
                ((IUnknown*)winrt::get_abi(element))
                    ->QueryInterface(IID_WebView2Standalone_IWebView2,
                                     webViewElement.put_void()));

            ApplyWebView2StyleCustomizations(webViewElement.get());

            winrt::Windows::Foundation::TypedEventHandler<
                winrt::Windows::Foundation::IInspectable,
                winrt::Windows::Foundation::IInspectable>
                eventHandler = [](const winrt::Windows::Foundation::
                                      IInspectable& sender,
                                  const winrt::Windows::Foundation::
                                      IInspectable& args) {
                    winrt::com_ptr<ICoreWebView2NavigationCompletedEventArgs>
                        webViewArgs;
                    winrt::check_hresult(
                        ((IUnknown*)winrt::get_abi(args))
                            ->QueryInterface(
                                IID_ICoreWebView2NavigationCompletedEventArgs,
                                webViewArgs.put_void()));

                    bool success;
                    winrt::check_hresult(webViewArgs->get_IsSuccess(&success));
                    if (!success) {
                        return;
                    }

                    winrt::com_ptr<WebView2Standalone_IWebView2> webViewElement;
                    winrt::check_hresult(
                        ((IUnknown*)winrt::get_abi(sender))
                            ->QueryInterface(IID_WebView2Standalone_IWebView2,
                                             webViewElement.put_void()));

                    ApplyWebView2StyleCustomizations(webViewElement.get());
                };

            winrt::check_hresult(webViewElement->add_NavigationCompleted(
                *(void**)(&eventHandler),
                put_abi(
                    webViewCustomizationState.navigationCompletedEventToken)));
        }
    }
}

PCWSTR CreateWebViewJsCodeForClear() {
    PCWSTR jsCode =
        LR"(
        (() => {
        const styleElementId = "windhawk-windows-11-start-menu-styler-style";
        const style = document.getElementById(styleElementId);
        if (style) {
            style.parentNode.removeChild(style);
        }
        })();
    )";

    Wh_Log(L"======================================== JS:");
    std::wstringstream ss(jsCode);
    std::wstring line;
    while (std::getline(ss, line, L'\n')) {
        Wh_Log(L"%s", line.c_str());
    }
    Wh_Log(L"========================================");

    return jsCode;
}

void ClearWebViewStyleCustomizations(Controls::WebView webViewElement) {
    PCWSTR jsCode = CreateWebViewJsCodeForClear();

    webViewElement.InvokeScriptAsync(
        L"eval", winrt::single_threaded_vector<winrt::hstring>(
                     {winrt::hstring(jsCode)}));
}

void ClearWebView2StyleCustomizations(
    WebView2Standalone_IWebView2* webViewElement) {
    PCWSTR jsCode = CreateWebViewJsCodeForClear();

    void* operationPtr;
    auto jsCodeHstring = winrt::hstring(jsCode);
    winrt::check_hresult(webViewElement->ExecuteScriptAsync(
        *(void**)(&jsCodeHstring), &operationPtr));
    auto operation =
        winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>{
            operationPtr, winrt::take_ownership_from_abi};
}

void ClearWebViewCustomizations(
    const WebViewCustomizationState& webViewCustomizationState) {
    auto element = webViewCustomizationState.element.get();
    if (!element) {
        return;
    }

    if (!webViewCustomizationState.isWebView2) {
        auto webViewElement = element.as<Controls::WebView>();

        ClearWebViewStyleCustomizations(webViewElement);

        webViewElement.NavigationCompleted(
            webViewCustomizationState.navigationCompletedEventToken);
    } else {
        winrt::com_ptr<WebView2Standalone_IWebView2> webViewElement;
        winrt::check_hresult(
            ((IUnknown*)winrt::get_abi(element))
                ->QueryInterface(IID_WebView2Standalone_IWebView2,
                                 webViewElement.put_void()));

        ClearWebView2StyleCustomizations(webViewElement.get());

        winrt::check_hresult(webViewElement->remove_NavigationCompleted(
            webViewCustomizationState.navigationCompletedEventToken));
    }
}

void ApplyCustomizations(InstanceHandle handle,
                         FrameworkElement element,
                         PCWSTR fallbackClassName) {
    if (!g_webContentCss.empty() || !g_webContentJs.empty()) {
        try {
            ApplyCustomizationsIfWebView(handle, element);
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
        }
    }

    auto overrides = FindElementPropertyOverrides(element, fallbackClassName);
    if (overrides.empty()) {
        return;
    }

    Wh_Log(L"Applying styles");

    auto& elementCustomizationState = g_elementsCustomizationState[handle];

    for (const auto& [visualStateGroupOptionalWeakPtrIter, stateIter] :
         elementCustomizationState.perVisualStateGroup) {
        RestoreCustomizationsForVisualStateGroup(
            element, visualStateGroupOptionalWeakPtrIter, stateIter);
    }

    elementCustomizationState.element = element;
    elementCustomizationState.perVisualStateGroup.clear();

    for (auto& [visualStateGroup, overridesForVisualStateGroup] : overrides) {
        std::optional<winrt::weak_ref<VisualStateGroup>>
            visualStateGroupOptionalWeakPtr;
        if (visualStateGroup) {
            visualStateGroupOptionalWeakPtr = visualStateGroup;
        }

        elementCustomizationState.perVisualStateGroup.push_back(
            {visualStateGroupOptionalWeakPtr, {}});
        auto* elementCustomizationStateForVisualStateGroup =
            &elementCustomizationState.perVisualStateGroup.back().second;

        ApplyCustomizationsForVisualStateGroup(
            element, visualStateGroup, std::move(overridesForVisualStateGroup),
            elementCustomizationStateForVisualStateGroup);
    }
}

void CleanupCustomizations(InstanceHandle handle) {
    if (auto it = g_elementsCustomizationState.find(handle);
        it != g_elementsCustomizationState.end()) {
        auto& elementCustomizationState = it->second;

        auto element = elementCustomizationState.element.get();

        for (const auto& [visualStateGroupOptionalWeakPtrIter, stateIter] :
             elementCustomizationState.perVisualStateGroup) {
            RestoreCustomizationsForVisualStateGroup(
                element, visualStateGroupOptionalWeakPtrIter, stateIter);
        }

        g_elementsCustomizationState.erase(it);
    }

    if (auto it = g_webViewsCustomizationState.find(handle);
        it != g_webViewsCustomizationState.end()) {
        const auto& webViewCustomizationState = it->second;
        try {
            ClearWebViewCustomizations(webViewCustomizationState);
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
        }

        g_webViewsCustomizationState.erase(it);
    }
}

using StyleConstant = std::pair<std::wstring, std::wstring>;
using StyleConstants = std::vector<StyleConstant>;

std::optional<StyleConstant> ParseStyleConstant(std::wstring_view constant) {
    // Skip if commented.
    if (constant.starts_with(L"//")) {
        return std::nullopt;
    }

    auto eqPos = constant.find(L'=');
    if (eqPos == constant.npos) {
        Wh_Log(L"Skipping entry with no '=': %.*s",
               static_cast<int>(constant.length()), constant.data());
        return std::nullopt;
    }

    auto key = TrimStringView(constant.substr(0, eqPos));
    auto val = TrimStringView(constant.substr(eqPos + 1));

    return StyleConstant{std::wstring(key), std::wstring(val)};
}

StyleConstants LoadStyleConstants(
    const std::vector<PCWSTR>& themeStyleConstants) {
    StyleConstants result;

    for (const auto themeStyleConstant : themeStyleConstants) {
        if (auto parsed = ParseStyleConstant(themeStyleConstant)) {
            result.push_back(std::move(*parsed));
        }
    }

    for (int i = 0;; i++) {
        string_setting_unique_ptr constantSetting(
            Wh_GetStringSetting(L"styleConstants[%d]", i));
        if (!*constantSetting.get()) {
            break;
        }

        if (auto parsed = ParseStyleConstant(constantSetting.get())) {
            result.push_back(std::move(*parsed));
        }
    }

    // Reverse the order to allow overriding definitions with the same name.
    std::reverse(result.begin(), result.end());

    // Sort by name length to replace long names first.
    std::stable_sort(result.begin(), result.end(),
                     [](const StyleConstant& a, const StyleConstant& b) {
                         return a.first.size() > b.first.size();
                     });

    return result;
}

std::wstring ApplyStyleConstants(std::wstring_view style,
                                 const StyleConstants& styleConstants) {
    std::wstring result;

    size_t lastPos = 0;
    size_t findPos;

    while ((findPos = style.find('$', lastPos)) != style.npos) {
        result.append(style, lastPos, findPos - lastPos);

        const StyleConstant* constant = nullptr;
        for (const auto& s : styleConstants) {
            if (s.first == style.substr(findPos + 1, s.first.size())) {
                constant = &s;
                break;
            }
        }

        if (constant) {
            result += constant->second;
            lastPos = findPos + 1 + constant->first.size();
        } else {
            result += '$';
            lastPos = findPos + 1;
        }
    }

    // Care for the rest after last occurrence.
    result += style.substr(lastPos);

    return result;
}

ElementMatcher ElementMatcherFromString(std::wstring_view str) {
    ElementMatcher result;
    PropertyValuesUnresolved propertyValuesUnresolved;

    auto i = str.find_first_of(L"#@[");
    result.type = TrimStringView(str.substr(0, i));
    if (result.type.empty()) {
        throw std::runtime_error("Bad target syntax, empty type");
    }

    while (i != str.npos) {
        auto iNext = str.find_first_of(L"#@[", i + 1);
        auto nextPart =
            str.substr(i + 1, iNext == str.npos ? str.npos : iNext - (i + 1));

        switch (str[i]) {
            case L'#':
                if (!result.name.empty()) {
                    throw std::runtime_error(
                        "Bad target syntax, more than one name");
                }

                result.name = TrimStringView(nextPart);
                if (result.name.empty()) {
                    throw std::runtime_error("Bad target syntax, empty name");
                }
                break;

            case L'@':
                if (result.visualStateGroupName) {
                    throw std::runtime_error(
                        "Bad target syntax, more than one visual state group");
                }

                result.visualStateGroupName = TrimStringView(nextPart);
                break;

            case L'[': {
                auto rule = TrimStringView(nextPart);
                if (rule.length() == 0 || rule.back() != L']') {
                    throw std::runtime_error("Bad target syntax, missing ']'");
                }

                rule = TrimStringView(rule.substr(0, rule.length() - 1));
                if (rule.length() == 0) {
                    throw std::runtime_error(
                        "Bad target syntax, empty property");
                }

                if (rule.find_first_not_of(L"0123456789") == rule.npos) {
                    result.oneBasedIndex = std::stoi(std::wstring(rule));
                    break;
                }

                auto ruleEqPos = rule.find(L'=');
                if (ruleEqPos == rule.npos) {
                    throw std::runtime_error(
                        "Bad target syntax, missing '=' in property");
                }

                auto ruleKey = TrimStringView(rule.substr(0, ruleEqPos));
                auto ruleVal = TrimStringView(rule.substr(ruleEqPos + 1));

                if (ruleKey.length() == 0) {
                    throw std::runtime_error(
                        "Bad target syntax, empty property name");
                }

                propertyValuesUnresolved.push_back(
                    {std::wstring(ruleKey), std::wstring(ruleVal)});
                break;
            }

            default:
                throw std::runtime_error("Bad target syntax");
        }

        i = iNext;
    }

    result.propertyValues = std::move(propertyValuesUnresolved);

    return result;
}

StyleRule StyleRuleFromString(std::wstring_view str) {
    StyleRule result;

    auto eqPos = str.find(L'=');
    if (eqPos == str.npos) {
        throw std::runtime_error("Bad style syntax, '=' is missing");
    }

    auto name = str.substr(0, eqPos);
    auto value = str.substr(eqPos + 1);

    result.value = TrimStringView(value);

    if (name.size() > 0 && name.back() == L':') {
        result.isXamlValue = true;
        name = name.substr(0, name.size() - 1);
    }

    auto atPos = name.find(L'@');
    if (atPos != name.npos) {
        result.visualState = TrimStringView(name.substr(atPos + 1));
        name = name.substr(0, atPos);
    }

    result.name = TrimStringView(name);
    if (result.name.empty()) {
        throw std::runtime_error("Bad style syntax, empty name");
    }

    return result;
}

std::wstring AdjustTypeName(std::wstring_view type) {
    if (type.find_first_of(L".:") == type.npos) {
        if (type == L"Rectangle") {
            return L"Windows.UI.Xaml.Shapes.Rectangle";
        }

        return L"Windows.UI.Xaml.Controls." + std::wstring{type};
    }

    static const std::vector<std::pair<std::wstring_view, std::wstring_view>>
        adjustments = {
            {L"StartMenu:", L"StartMenu."},
            {L"muxc:", L"Microsoft.UI.Xaml.Controls."},
        };

    for (const auto& adjustment : adjustments) {
        if (type.starts_with(adjustment.first)) {
            auto result = std::wstring{adjustment.second};
            result += type.substr(adjustment.first.size());
            return result;
        }
    }

    return std::wstring{type};
}

void AddElementCustomizationRules(std::wstring_view target,
                                  std::vector<std::wstring> styles) {
    ElementCustomizationRules elementCustomizationRules;

    auto targetParts = SplitStringView(target, L" > ");

    bool first = true;
    bool hasVisualStateGroup = false;
    for (auto i = targetParts.rbegin(); i != targetParts.rend(); ++i) {
        const auto& targetPart = *i;

        auto matcher = ElementMatcherFromString(targetPart);
        matcher.type = AdjustTypeName(matcher.type);

        if (matcher.visualStateGroupName) {
            if (hasVisualStateGroup) {
                throw std::runtime_error(
                    "Element type can't have more than one visual state group");
            }

            hasVisualStateGroup = true;
        }

        if (first) {
            std::vector<StyleRule> styleRules;
            for (const auto& style : styles) {
                styleRules.push_back(StyleRuleFromString(style));
            }

            elementCustomizationRules.elementMatcher = std::move(matcher);
            elementCustomizationRules.propertyOverrides = std::move(styleRules);
        } else {
            elementCustomizationRules.parentElementMatchers.push_back(
                std::move(matcher));
        }

        first = false;
    }

    g_elementsCustomizationRules.push_back(
        std::move(elementCustomizationRules));
}

bool ProcessSingleTargetStylesFromSettings(
    int index,
    const StyleConstants& styleConstants) {
    string_setting_unique_ptr targetStringSetting(
        Wh_GetStringSetting(L"controlStyles[%d].target", index));
    if (!*targetStringSetting.get()) {
        return false;
    }

    // Skip if commented.
    if (targetStringSetting[0] == L'/' && targetStringSetting[1] == L'/') {
        return true;
    }

    Wh_Log(L"Processing styles for %s", targetStringSetting.get());

    std::vector<std::wstring> styles;

    for (int styleIndex = 0;; styleIndex++) {
        string_setting_unique_ptr styleSetting(Wh_GetStringSetting(
            L"controlStyles[%d].styles[%d]", index, styleIndex));
        if (!*styleSetting.get()) {
            break;
        }

        // Skip if commented.
        if (styleSetting[0] == L'/' && styleSetting[1] == L'/') {
            continue;
        }

        styles.push_back(
            ApplyStyleConstants(styleSetting.get(), styleConstants));
    }

    if (styles.size() > 0) {
        AddElementCustomizationRules(targetStringSetting.get(),
                                     std::move(styles));
    }

    return true;
}

void ProcessWebStylesFromSettings(
    const StyleConstants& styleConstants,
    const std::vector<ThemeTargetStyles>& themeStyles) {
    std::wstring webContentCss;

    for (const auto& themeStyle : themeStyles) {
        Wh_Log(L"Processing theme WebView styles for %s", themeStyle.target);

        webContentCss += themeStyle.target;
        webContentCss += L" {\n";

        for (const auto& style : themeStyle.styles) {
            webContentCss += ApplyStyleConstants(style, styleConstants);
            webContentCss += L";\n";
        }

        webContentCss += L"}\n";
    }

    for (int i = 0;; i++) {
        string_setting_unique_ptr targetStringSetting(
            Wh_GetStringSetting(L"webContentStyles[%d].target", i));
        if (!*targetStringSetting.get()) {
            break;
        }

        Wh_Log(L"Processing WebView styles for %s", targetStringSetting.get());

        webContentCss += targetStringSetting.get();
        webContentCss += L" {\n";

        for (int styleIndex = 0;; styleIndex++) {
            string_setting_unique_ptr styleSetting(Wh_GetStringSetting(
                L"webContentStyles[%d].styles[%d]", i, styleIndex));
            if (!*styleSetting.get()) {
                break;
            }

            // Skip if commented.
            if (styleSetting[0] == L'/' && styleSetting[1] == L'/') {
                continue;
            }

            webContentCss +=
                ApplyStyleConstants(styleSetting.get(), styleConstants);
            webContentCss += L";\n";
        }

        webContentCss += L"}\n";
    }

    g_webContentCss = std::move(webContentCss);
    g_webContentJs =
        string_setting_unique_ptr(Wh_GetStringSetting(L"webContentCustomJs"))
            .get();
}

void ProcessAllStylesFromSettings() {
    PCWSTR themeName = Wh_GetStringSetting(L"theme");
    const Theme* theme = nullptr;
    if (wcscmp(themeName, L"NoRecommendedSection") == 0) {
        theme = g_isRedesignedStartMenu
                    ? &g_themeNoRecommendedSection_variant_NewStartMenu
                    : &g_themeNoRecommendedSection;
    } else if (wcscmp(themeName, L"SideBySide") == 0) {
        theme = &g_themeSideBySide;
    } else if (wcscmp(themeName, L"SideBySide2") == 0) {
        theme = &g_themeSideBySide2;
    } else if (wcscmp(themeName, L"SideBySideMinimal") == 0) {
        theme = &g_themeSideBySideMinimal;
    } else if (wcscmp(themeName, L"Windows10") == 0) {
        theme = g_isRedesignedStartMenu ? &g_themeWindows10_variant_NewStartMenu
                                        : &g_themeWindows10;
    } else if (wcscmp(themeName, L"Windows10_variant_Minimal") == 0) {
        theme = g_isRedesignedStartMenu
                    ? &g_themeWindows10_variant_Minimal_NewStartMenu
                    : &g_themeWindows10_variant_Minimal;
    } else if (wcscmp(themeName, L"TranslucentStartMenu") == 0) {
        theme = g_isRedesignedStartMenu
                    ? &g_themeTranslucentStartMenu_variant_NewStartMenu
                    : &g_themeTranslucentStartMenu;
    } else if (wcscmp(themeName, L"Windows11_Metro10") == 0) {
        theme = &g_themeWindows11_Metro10;
    } else if (wcscmp(themeName, L"Fluent2Inspired") == 0) {
        theme = g_isRedesignedStartMenu
                    ? &g_themeFluent2Inspired_variant_NewStartMenu
                    : &g_themeFluent2Inspired;
    } else if (wcscmp(themeName, L"RosePine") == 0) {
        theme = g_isRedesignedStartMenu ? &g_themeRosePine_variant_NewStartMenu
                                        : &g_themeRosePine;
    } else if (wcscmp(themeName, L"Windows11_Metro10Minimal") == 0) {
        theme = &g_themeWindows11_Metro10Minimal;
    } else if (wcscmp(themeName, L"Everblush") == 0) {
        theme = &g_themeEverblush;
    } else if (wcscmp(themeName, L"21996") == 0) {
        theme = &g_theme21996;
    } else if (wcscmp(themeName, L"Down Aero") == 0) {
        theme = &g_themeDown_Aero;
    } else if (wcscmp(themeName, L"UniMenu") == 0) {
        theme = &g_themeUniMenu;
    } else if (wcscmp(themeName, L"LegacyFluent") == 0) {
        theme = &g_themeLegacyFluent;
    } else if (wcscmp(themeName, L"OnlySearch") == 0) {
        theme = &g_themeOnlySearch;
    }
    Wh_FreeStringSetting(themeName);

    StyleConstants styleConstants = LoadStyleConstants(
        theme ? theme->styleConstants : std::vector<PCWSTR>{});

    if (theme) {
        for (const auto& themeTargetStyle : theme->targetStyles) {
            try {
                std::vector<std::wstring> styles;
                styles.reserve(themeTargetStyle.styles.size());
                for (const auto& s : themeTargetStyle.styles) {
                    styles.push_back(ApplyStyleConstants(s, styleConstants));
                }

                AddElementCustomizationRules(themeTargetStyle.target,
                                             std::move(styles));
            } catch (winrt::hresult_error const& ex) {
                Wh_Log(L"Error %08X", ex.code());
            } catch (std::exception const& ex) {
                Wh_Log(L"Error: %S", ex.what());
            }
        }
    }

    for (int i = 0;; i++) {
        try {
            if (!ProcessSingleTargetStylesFromSettings(i, styleConstants)) {
                break;
            }
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
        } catch (std::exception const& ex) {
            Wh_Log(L"Error: %S", ex.what());
        }
    }

    if (g_target == Target::SearchHost) {
        ProcessWebStylesFromSettings(styleConstants,
                                     theme ? theme->webViewTargetStyles
                                           : std::vector<ThemeTargetStyles>{});
    }
}

bool ProcessSingleResourceVariableFromSettings(int index) {
    string_setting_unique_ptr variableKeyStringSetting(
        Wh_GetStringSetting(L"resourceVariables[%d].variableKey", index));
    if (!*variableKeyStringSetting.get()) {
        return false;
    }

    Wh_Log(L"Processing resource variable %s", variableKeyStringSetting.get());

    std::wstring_view variableKey = variableKeyStringSetting.get();

    auto resources = Application::Current().Resources();

    auto resource = resources.Lookup(winrt::box_value(variableKey));

    // Example: Windows.Foundation.IReference`1<Windows.UI.Xaml.Thickness>
    auto resourceClassName = winrt::get_class_name(resource);
    if (resourceClassName.starts_with(L"Windows.Foundation.IReference`1<") &&
        resourceClassName.ends_with(L'>')) {
        size_t prefixSize = sizeof("Windows.Foundation.IReference`1<") - 1;
        resourceClassName =
            winrt::hstring(resourceClassName.data() + prefixSize,
                           resourceClassName.size() - prefixSize - 1);
    }

    auto resourceTypeName = Interop::TypeName{resourceClassName};

    string_setting_unique_ptr valueStringSetting(
        Wh_GetStringSetting(L"resourceVariables[%d].value", index));

    std::wstring_view value = valueStringSetting.get();

    resources.Insert(winrt::box_value(variableKey),
                     Markup::XamlBindingHelper::ConvertValue(
                         resourceTypeName, winrt::box_value(value)));

    return true;
}

void ProcessResourceVariablesFromSettings() {
    for (int i = 0;; i++) {
        try {
            if (!ProcessSingleResourceVariableFromSettings(i)) {
                break;
            }
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
        } catch (std::exception const& ex) {
            Wh_Log(L"Error: %S", ex.what());
        }
    }
}

void UninitializeSettingsAndTap() {
    if (g_delayedAllAppsRootVisibilitySet) {
        g_delayedAllAppsRootVisibilitySet.Cancel();
        g_delayedAllAppsRootVisibilitySet = nullptr;
    }

    for (const auto& [handle, elementCustomizationState] :
         g_elementsCustomizationState) {
        auto element = elementCustomizationState.element.get();

        for (const auto& [visualStateGroupOptionalWeakPtrIter, stateIter] :
             elementCustomizationState.perVisualStateGroup) {
            RestoreCustomizationsForVisualStateGroup(
                element, visualStateGroupOptionalWeakPtrIter, stateIter);
        }
    }

    g_elementsCustomizationState.clear();

    g_elementsCustomizationRules.clear();

    for (const auto& [handle, webViewCustomizationState] :
         g_webViewsCustomizationState) {
        try {
            ClearWebViewCustomizations(webViewCustomizationState);
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Error %08X: %s", ex.code(), ex.message().c_str());
        }
    }

    g_webViewsCustomizationState.clear();

    g_targetThreadId = 0;
}

void InitializeSettingsAndTap() {
    DWORD kNoThreadId = 0;
    if (!g_targetThreadId.compare_exchange_strong(kNoThreadId,
                                                  GetCurrentThreadId())) {
        return;
    }

    ProcessAllStylesFromSettings();
    ProcessResourceVariablesFromSettings();

    HRESULT hr = InjectWindhawkTAP();
    if (FAILED(hr)) {
        Wh_Log(L"Error %08X", hr);
    }
}

using CreateWindowInBand_t = HWND(WINAPI*)(DWORD dwExStyle,
                                           LPCWSTR lpClassName,
                                           LPCWSTR lpWindowName,
                                           DWORD dwStyle,
                                           int X,
                                           int Y,
                                           int nWidth,
                                           int nHeight,
                                           HWND hWndParent,
                                           HMENU hMenu,
                                           HINSTANCE hInstance,
                                           PVOID lpParam,
                                           DWORD dwBand);
CreateWindowInBand_t CreateWindowInBand_Original;
HWND WINAPI CreateWindowInBand_Hook(DWORD dwExStyle,
                                    LPCWSTR lpClassName,
                                    LPCWSTR lpWindowName,
                                    DWORD dwStyle,
                                    int X,
                                    int Y,
                                    int nWidth,
                                    int nHeight,
                                    HWND hWndParent,
                                    HMENU hMenu,
                                    HINSTANCE hInstance,
                                    PVOID lpParam,
                                    DWORD dwBand) {
    HWND hWnd = CreateWindowInBand_Original(
        dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight,
        hWndParent, hMenu, hInstance, lpParam, dwBand);
    if (!hWnd) {
        return hWnd;
    }

    BOOL bTextualClassName = ((ULONG_PTR)lpClassName & ~(ULONG_PTR)0xffff) != 0;

    if (bTextualClassName &&
        _wcsicmp(lpClassName, L"Windows.UI.Core.CoreWindow") == 0) {
        Wh_Log(L"Initializing - Created core window: %08X",
               (DWORD)(ULONG_PTR)hWnd);
        InitializeSettingsAndTap();
    }

    return hWnd;
}

using CreateWindowInBandEx_t = HWND(WINAPI*)(DWORD dwExStyle,
                                             LPCWSTR lpClassName,
                                             LPCWSTR lpWindowName,
                                             DWORD dwStyle,
                                             int X,
                                             int Y,
                                             int nWidth,
                                             int nHeight,
                                             HWND hWndParent,
                                             HMENU hMenu,
                                             HINSTANCE hInstance,
                                             PVOID lpParam,
                                             DWORD dwBand,
                                             DWORD dwTypeFlags);
CreateWindowInBandEx_t CreateWindowInBandEx_Original;
HWND WINAPI CreateWindowInBandEx_Hook(DWORD dwExStyle,
                                      LPCWSTR lpClassName,
                                      LPCWSTR lpWindowName,
                                      DWORD dwStyle,
                                      int X,
                                      int Y,
                                      int nWidth,
                                      int nHeight,
                                      HWND hWndParent,
                                      HMENU hMenu,
                                      HINSTANCE hInstance,
                                      PVOID lpParam,
                                      DWORD dwBand,
                                      DWORD dwTypeFlags) {
    HWND hWnd = CreateWindowInBandEx_Original(
        dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight,
        hWndParent, hMenu, hInstance, lpParam, dwBand, dwTypeFlags);
    if (!hWnd) {
        return hWnd;
    }

    BOOL bTextualClassName = ((ULONG_PTR)lpClassName & ~(ULONG_PTR)0xffff) != 0;

    if (bTextualClassName &&
        _wcsicmp(lpClassName, L"Windows.UI.Core.CoreWindow") == 0) {
        Wh_Log(L"Initializing - Created core window: %08X",
               (DWORD)(ULONG_PTR)hWnd);
        InitializeSettingsAndTap();
    }

    return hWnd;
}

using RunFromWindowThreadProc_t = void(WINAPI*)(PVOID parameter);

bool RunFromWindowThread(HWND hWnd,
                         RunFromWindowThreadProc_t proc,
                         PVOID procParam) {
    static const UINT runFromWindowThreadRegisteredMsg =
        RegisterWindowMessage(L"Windhawk_RunFromWindowThread_" WH_MOD_ID);

    struct RUN_FROM_WINDOW_THREAD_PARAM {
        RunFromWindowThreadProc_t proc;
        PVOID procParam;
    };

    DWORD dwThreadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (dwThreadId == 0) {
        return false;
    }

    if (dwThreadId == GetCurrentThreadId()) {
        proc(procParam);
        return true;
    }

    HHOOK hook = SetWindowsHookEx(
        WH_CALLWNDPROC,
        [](int nCode, WPARAM wParam, LPARAM lParam) -> LRESULT {
            if (nCode == HC_ACTION) {
                const CWPSTRUCT* cwp = (const CWPSTRUCT*)lParam;
                if (cwp->message == runFromWindowThreadRegisteredMsg) {
                    RUN_FROM_WINDOW_THREAD_PARAM* param =
                        (RUN_FROM_WINDOW_THREAD_PARAM*)cwp->lParam;
                    param->proc(param->procParam);
                }
            }

            return CallNextHookEx(nullptr, nCode, wParam, lParam);
        },
        nullptr, dwThreadId);
    if (!hook) {
        return false;
    }

    RUN_FROM_WINDOW_THREAD_PARAM param;
    param.proc = proc;
    param.procParam = procParam;
    SendMessage(hWnd, runFromWindowThreadRegisteredMsg, 0, (LPARAM)&param);

    UnhookWindowsHookEx(hook);

    return true;
}

HWND GetCoreWnd() {
    struct ENUM_WINDOWS_PARAM {
        HWND* hWnd;
    };

    HWND hWnd = nullptr;
    ENUM_WINDOWS_PARAM param = {&hWnd};
    EnumWindows(
        [](HWND hWnd, LPARAM lParam) -> BOOL {
            ENUM_WINDOWS_PARAM& param = *(ENUM_WINDOWS_PARAM*)lParam;

            DWORD dwProcessId = 0;
            if (!GetWindowThreadProcessId(hWnd, &dwProcessId) ||
                dwProcessId != GetCurrentProcessId()) {
                return TRUE;
            }

            WCHAR szClassName[32];
            if (GetClassName(hWnd, szClassName, ARRAYSIZE(szClassName)) == 0) {
                return TRUE;
            }

            if (_wcsicmp(szClassName, L"Windows.UI.Core.CoreWindow") == 0) {
                *param.hWnd = hWnd;
                return FALSE;
            }

            return TRUE;
        },
        (LPARAM)&param);

    return hWnd;
}

enum FEATURE_ENABLED_STATE {
    FEATURE_ENABLED_STATE_DEFAULT = 0,
    FEATURE_ENABLED_STATE_DISABLED = 1,
    FEATURE_ENABLED_STATE_ENABLED = 2,
};

#pragma pack(push, 1)
struct RTL_FEATURE_CONFIGURATION {
    unsigned int featureId;
    unsigned __int32 group : 4;
    FEATURE_ENABLED_STATE enabledState : 2;
    unsigned __int32 enabledStateOptions : 1;
    unsigned __int32 unused1 : 1;
    unsigned __int32 variant : 6;
    unsigned __int32 variantPayloadKind : 2;
    unsigned __int32 unused2 : 16;
    unsigned int payload;
};
#pragma pack(pop)

using RtlQueryFeatureConfiguration_t = int(NTAPI*)(UINT32,
                                                   int,
                                                   INT64*,
                                                   RTL_FEATURE_CONFIGURATION*);
RtlQueryFeatureConfiguration_t RtlQueryFeatureConfiguration_Original;
int NTAPI RtlQueryFeatureConfiguration_Hook(UINT32 featureId,
                                            int group,
                                            INT64* variant,
                                            RTL_FEATURE_CONFIGURATION* config) {
    int ret = RtlQueryFeatureConfiguration_Original(featureId, group, variant,
                                                    config);

    switch (featureId) {
        // Disable the Start Menu Phone Link layout feature.
        // https://winaero.com/enable-phone-link-flyout-start-menu/
        case 48697323:
        // Disable the revamped Start menu experience.
        // https://x.com/phantomofearth/status/1907877141540118888
        case 47205210:
        // case 49221331:
        case 49402389:
            config->enabledState = FEATURE_ENABLED_STATE_DISABLED;
            break;
    }

    return ret;
}

std::optional<bool> IsOsFeatureEnabled(UINT32 featureId) {
    static RtlQueryFeatureConfiguration_t pRtlQueryFeatureConfiguration = []() {
        HMODULE hNtDll = LoadLibraryW(L"ntdll.dll");
        return hNtDll ? (RtlQueryFeatureConfiguration_t)GetProcAddress(
                            hNtDll, "RtlQueryFeatureConfiguration")
                      : nullptr;
    }();

    if (!pRtlQueryFeatureConfiguration) {
        Wh_Log(L"RtlQueryFeatureConfiguration not found");
        return std::nullopt;
    }

    RTL_FEATURE_CONFIGURATION feature = {0};
    INT64 changeStamp = 0;
    HRESULT hr =
        pRtlQueryFeatureConfiguration(featureId, 1, &changeStamp, &feature);
    if (SUCCEEDED(hr)) {
        Wh_Log(L"RtlQueryFeatureConfiguration result for %u: %d", featureId,
               feature.enabledState);

        switch (feature.enabledState) {
            case FEATURE_ENABLED_STATE_DISABLED:
                return false;
            case FEATURE_ENABLED_STATE_ENABLED:
                return true;
            case FEATURE_ENABLED_STATE_DEFAULT:
                return std::nullopt;
        }
    } else {
        Wh_Log(L"RtlQueryFeatureConfiguration error for %u: %08X", featureId,
               hr);
    }

    return std::nullopt;
}

PTP_TIMER g_statsTimer;

bool StartStatsTimer() {
    ULONGLONG lastStatsTime = 0;
    Wh_GetBinaryValue(L"statsTimerLastTime", &lastStatsTime,
                      sizeof(lastStatsTime));

    // -1 can be set for disabling the stats timer.
    if (lastStatsTime == 0xFFFFFFFF'FFFFFFFF) {
        return false;
    }

    FILETIME currentTimeFt;
    GetSystemTimeAsFileTime(&currentTimeFt);

    ULONGLONG currentTime = ((ULONGLONG)currentTimeFt.dwHighDateTime << 32) |
                            currentTimeFt.dwLowDateTime;

    constexpr ULONGLONG k10Minutes = 10 * 60 * 10000000LL;
    constexpr ULONGLONG k24Hours = 24 * 60 * 60 * 10000000LL;

    ULONGLONG minDueTime = currentTime + k10Minutes;
    ULONGLONG maxDueTime = currentTime + k24Hours;

    ULONGLONG dueTime = k24Hours - (currentTime - lastStatsTime);
    if (dueTime < minDueTime) {
        dueTime = minDueTime;
    } else if (dueTime > maxDueTime) {
        dueTime = maxDueTime;
    }

    g_statsTimer = CreateThreadpoolTimer(
        [](PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER) {
            Wh_Log(L">");

            FILETIME currentTimeFt;
            GetSystemTimeAsFileTime(&currentTimeFt);
            ULONGLONG currentTime =
                ((ULONGLONG)currentTimeFt.dwHighDateTime << 32) |
                currentTimeFt.dwLowDateTime;

            Wh_SetBinaryValue(L"statsTimerLastTime", &currentTime,
                              sizeof(currentTime));

            string_setting_unique_ptr themeName(Wh_GetStringSetting(L"theme"));
            if (!*themeName.get()) {
                return;
            }

            std::wstring themeNameEscaped = themeName.get();
            std::replace(themeNameEscaped.begin(), themeNameEscaped.end(), L' ',
                         L'_');

            std::wstring statsUrl =
                L"https://github.com/ramensoftware/"
                L"windows-11-start-menu-styling-guide/releases/download/"
                L"2025-06-07/";
            statsUrl += themeNameEscaped;
            statsUrl += L".txt";

            Wh_Log(L"Submitting stats to %s", statsUrl.c_str());

            const WH_URL_CONTENT* content =
                Wh_GetUrlContent(statsUrl.c_str(), nullptr);
            if (!content) {
                Wh_Log(L"Failed to get stats content");
                return;
            }

            if (content->statusCode != 200) {
                Wh_Log(L"Stats content status code: %d", content->statusCode);
            }

            Wh_FreeUrlContent(content);
            Wh_Log(L"Stats content submitted");
        },
        nullptr, nullptr);
    if (!g_statsTimer) {
        Wh_Log(L"Failed to create stats timer");
        return false;
    }

    constexpr DWORD k24HoursInMs = 24 * 60 * 60 * 1000;
    constexpr ULONGLONG k10MinutesInMs = 10 * 60 * 1000;

    FILETIME dueTimeFt;
    dueTimeFt.dwLowDateTime = (DWORD)(dueTime & 0xFFFFFFFF);
    dueTimeFt.dwHighDateTime = (DWORD)(dueTime >> 32);
    SetThreadpoolTimer(g_statsTimer, &dueTimeFt, k24HoursInMs, k10MinutesInMs);
    return true;
}

void StopStatsTimer() {
    if (g_statsTimer) {
        SetThreadpoolTimer(g_statsTimer, nullptr, 0, 0);
        WaitForThreadpoolTimerCallbacks(g_statsTimer, TRUE);
        CloseThreadpoolTimer(g_statsTimer);
        g_statsTimer = nullptr;
    }
}

BOOL Wh_ModInit() {
    Wh_Log(L">");

    g_disableNewStartMenuLayout =
        Wh_GetIntSetting(L"disableNewStartMenuLayout");

    g_isRedesignedStartMenu = !g_disableNewStartMenuLayout &&
                              IsOsFeatureEnabled(47205210).value_or(false) &&
                              IsOsFeatureEnabled(48433719).value_or(false) &&
                              IsOsFeatureEnabled(49221331).value_or(false) &&
                              IsOsFeatureEnabled(49402389).value_or(false);

    g_target = Target::StartMenu;

    WCHAR moduleFilePath[MAX_PATH];
    switch (
        GetModuleFileName(nullptr, moduleFilePath, ARRAYSIZE(moduleFilePath))) {
        case 0:
        case ARRAYSIZE(moduleFilePath):
            Wh_Log(L"GetModuleFileName failed");
            break;

        default:
            if (PCWSTR moduleFileName = wcsrchr(moduleFilePath, L'\\')) {
                moduleFileName++;
                if (_wcsicmp(moduleFileName, L"SearchHost.exe") == 0 ||
                    _wcsicmp(moduleFileName, L"SearchApp.exe") == 0) {
                    g_target = Target::SearchHost;
                }
            } else {
                Wh_Log(L"GetModuleFileName returned an unsupported path");
            }
            break;
    }

    HMODULE user32Module =
        LoadLibraryEx(L"user32.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (user32Module) {
        void* pCreateWindowInBand =
            (void*)GetProcAddress(user32Module, "CreateWindowInBand");
        if (pCreateWindowInBand) {
            Wh_SetFunctionHook(pCreateWindowInBand,
                               (void*)CreateWindowInBand_Hook,
                               (void**)&CreateWindowInBand_Original);
        }

        void* pCreateWindowInBandEx =
            (void*)GetProcAddress(user32Module, "CreateWindowInBandEx");
        if (pCreateWindowInBandEx) {
            Wh_SetFunctionHook(pCreateWindowInBandEx,
                               (void*)CreateWindowInBandEx_Hook,
                               (void**)&CreateWindowInBandEx_Original);
        }
    }

    if (g_target == Target::StartMenu && g_disableNewStartMenuLayout) {
        HMODULE hNtDll = LoadLibraryW(L"ntdll.dll");
        RtlQueryFeatureConfiguration_t pRtlQueryFeatureConfiguration =
            (RtlQueryFeatureConfiguration_t)GetProcAddress(
                hNtDll, "RtlQueryFeatureConfiguration");
        if (pRtlQueryFeatureConfiguration) {
            Wh_SetFunctionHook((void*)pRtlQueryFeatureConfiguration,
                               (void*)RtlQueryFeatureConfiguration_Hook,
                               (void**)&RtlQueryFeatureConfiguration_Original);
        } else {
            Wh_Log(L"Failed to hook RtlQueryFeatureConfiguration");
        }
    }

    if (g_target == Target::StartMenu) {
        StartStatsTimer();
    }

    return TRUE;
}

void Wh_ModAfterInit() {
    Wh_Log(L">");

    HWND hCoreWnd = GetCoreWnd();
    if (hCoreWnd) {
        Wh_Log(L"Initializing - Found core window");
        RunFromWindowThread(
            hCoreWnd, [](PVOID) { InitializeSettingsAndTap(); }, nullptr);
    }
}

void Wh_ModUninit() {
    Wh_Log(L">");

    if (g_target == Target::StartMenu) {
        if (g_disableNewStartMenuLayout) {
            // Exit to have the new setting take effect. The process will be
            // relaunched automatically.
            ExitProcess(0);
        }

        StopStatsTimer();
    }

    if (g_visualTreeWatcher) {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    HWND hCoreWnd = GetCoreWnd();
    if (hCoreWnd) {
        Wh_Log(L"Uninitializing - Found core window");
        RunFromWindowThread(
            hCoreWnd, [](PVOID) { UninitializeSettingsAndTap(); }, nullptr);
    }
}

void Wh_ModSettingsChanged() {
    Wh_Log(L">");

    if (g_target == Target::StartMenu &&
        Wh_GetIntSetting(L"disableNewStartMenuLayout") !=
            g_disableNewStartMenuLayout) {
        // Exit to have the new setting take effect. The process will be
        // relaunched automatically.
        ExitProcess(0);
    }

    if (g_visualTreeWatcher) {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    HWND hCoreWnd = GetCoreWnd();
    if (hCoreWnd) {
        Wh_Log(L"Reinitializing - Found core window");
        RunFromWindowThread(
            hCoreWnd,
            [](PVOID) {
                UninitializeSettingsAndTap();
                InitializeSettingsAndTap();
            },
            nullptr);
    }
}
