#import <IconFontsKit/IFIcon.h>

/// Octicons icon types.
typedef NS_ENUM(IFIconType, IFOcticonsType) {
    /// Identifier: "octicon-alert"
    IFOIAlert                               = 0xf02d,
    /// Identifier: "octicon-arrow-down"
    IFOIArrowDown                           = 0xf03f,
    /// Identifier: "octicon-arrow-left"
    IFOIArrowLeft                           = 0xf040,
    /// Identifier: "octicon-arrow-right"
    IFOIArrowRight                          = 0xf03e,
    /// Identifier: "octicon-arrow-small-down"
    IFOIArrowSmallDown                      = 0xf0a0,
    /// Identifier: "octicon-arrow-small-left"
    IFOIArrowSmallLeft                      = 0xf0a1,
    /// Identifier: "octicon-arrow-small-right"
    IFOIArrowSmallRight                     = 0xf071,
    /// Identifier: "octicon-arrow-small-up"
    IFOIArrowSmallUp                        = 0xf09f,
    /// Identifier: "octicon-arrow-up"
    IFOIArrowUp                             = 0xf03d,
    /// Identifier: "octicon-microscope"
    IFOIMicroscope                          = 0xf0dd,
    /// Identifier: "octicon-beaker"
    IFOIBeaker                              = 0xf0dd,
    /// Identifier: "octicon-bell"
    IFOIBell                                = 0xf0de,
    /// Identifier: "octicon-bold"
    IFOIBold                                = 0xf0e2,
    /// Identifier: "octicon-book"
    IFOIBook                                = 0xf007,
    /// Identifier: "octicon-bookmark"
    IFOIBookmark                            = 0xf07b,
    /// Identifier: "octicon-briefcase"
    IFOIBriefcase                           = 0xf0d3,
    /// Identifier: "octicon-broadcast"
    IFOIBroadcast                           = 0xf048,
    /// Identifier: "octicon-browser"
    IFOIBrowser                             = 0xf0c5,
    /// Identifier: "octicon-bug"
    IFOIBug                                 = 0xf091,
    /// Identifier: "octicon-calendar"
    IFOICalendar                            = 0xf068,
    /// Identifier: "octicon-check"
    IFOICheck                               = 0xf03a,
    /// Identifier: "octicon-checklist"
    IFOIChecklist                           = 0xf076,
    /// Identifier: "octicon-chevron-down"
    IFOIChevronDown                         = 0xf0a3,
    /// Identifier: "octicon-chevron-left"
    IFOIChevronLeft                         = 0xf0a4,
    /// Identifier: "octicon-chevron-right"
    IFOIChevronRight                        = 0xf078,
    /// Identifier: "octicon-chevron-up"
    IFOIChevronUp                           = 0xf0a2,
    /// Identifier: "octicon-circle-slash"
    IFOICircleSlash                         = 0xf084,
    /// Identifier: "octicon-circuit-board"
    IFOICircuitBoard                        = 0xf0d6,
    /// Identifier: "octicon-clippy"
    IFOIClippy                              = 0xf035,
    /// Identifier: "octicon-clock"
    IFOIClock                               = 0xf046,
    /// Identifier: "octicon-cloud-download"
    IFOICloudDownload                       = 0xf00b,
    /// Identifier: "octicon-cloud-upload"
    IFOICloudUpload                         = 0xf00c,
    /// Identifier: "octicon-code"
    IFOICode                                = 0xf05f,
    /// Identifier: "octicon-comment-add"
    IFOICommentAdd                          = 0xf02b,
    /// Identifier: "octicon-comment"
    IFOIComment                             = 0xf02b,
    /// Identifier: "octicon-comment-discussion"
    IFOICommentDiscussion                   = 0xf04f,
    /// Identifier: "octicon-credit-card"
    IFOICreditCard                          = 0xf045,
    /// Identifier: "octicon-dash"
    IFOIDash                                = 0xf0ca,
    /// Identifier: "octicon-dashboard"
    IFOIDashboard                           = 0xf07d,
    /// Identifier: "octicon-database"
    IFOIDatabase                            = 0xf096,
    /// Identifier: "octicon-clone"
    IFOIClone                               = 0xf0dc,
    /// Identifier: "octicon-desktop-download"
    IFOIDesktopDownload                     = 0xf0dc,
    /// Identifier: "octicon-device-camera"
    IFOIDeviceCamera                        = 0xf056,
    /// Identifier: "octicon-device-camera-video"
    IFOIDeviceCameraVideo                   = 0xf057,
    /// Identifier: "octicon-device-desktop"
    IFOIDeviceDesktop                       = 0xf27c,
    /// Identifier: "octicon-device-mobile"
    IFOIDeviceMobile                        = 0xf038,
    /// Identifier: "octicon-diff"
    IFOIDiff                                = 0xf04d,
    /// Identifier: "octicon-diff-added"
    IFOIDiffAdded                           = 0xf06b,
    /// Identifier: "octicon-diff-ignored"
    IFOIDiffIgnored                         = 0xf099,
    /// Identifier: "octicon-diff-modified"
    IFOIDiffModified                        = 0xf06d,
    /// Identifier: "octicon-diff-removed"
    IFOIDiffRemoved                         = 0xf06c,
    /// Identifier: "octicon-diff-renamed"
    IFOIDiffRenamed                         = 0xf06e,
    /// Identifier: "octicon-ellipsis"
    IFOIEllipsis                            = 0xf09a,
    /// Identifier: "octicon-eye-unwatch"
    IFOIEyeUnwatch                          = 0xf04e,
    /// Identifier: "octicon-eye-watch"
    IFOIEyeWatch                            = 0xf04e,
    /// Identifier: "octicon-eye"
    IFOIEye                                 = 0xf04e,
    /// Identifier: "octicon-file-binary"
    IFOIFileBinary                          = 0xf094,
    /// Identifier: "octicon-file-code"
    IFOIFileCode                            = 0xf010,
    /// Identifier: "octicon-file-directory"
    IFOIFileDirectory                       = 0xf016,
    /// Identifier: "octicon-file-media"
    IFOIFileMedia                           = 0xf012,
    /// Identifier: "octicon-file-pdf"
    IFOIFilePdf                             = 0xf014,
    /// Identifier: "octicon-file-submodule"
    IFOIFileSubmodule                       = 0xf017,
    /// Identifier: "octicon-file-symlink-directory"
    IFOIFileSymlinkDirectory                = 0xf0b1,
    /// Identifier: "octicon-file-symlink-file"
    IFOIFileSymlinkFile                     = 0xf0b0,
    /// Identifier: "octicon-file-text"
    IFOIFileText                            = 0xf011,
    /// Identifier: "octicon-file-zip"
    IFOIFileZip                             = 0xf013,
    /// Identifier: "octicon-flame"
    IFOIFlame                               = 0xf0d2,
    /// Identifier: "octicon-fold"
    IFOIFold                                = 0xf0cc,
    /// Identifier: "octicon-gear"
    IFOIGear                                = 0xf02f,
    /// Identifier: "octicon-gift"
    IFOIGift                                = 0xf042,
    /// Identifier: "octicon-gist"
    IFOIGist                                = 0xf00e,
    /// Identifier: "octicon-gist-secret"
    IFOIGistSecret                          = 0xf08c,
    /// Identifier: "octicon-git-branch-create"
    IFOIGitBranchCreate                     = 0xf020,
    /// Identifier: "octicon-git-branch-delete"
    IFOIGitBranchDelete                     = 0xf020,
    /// Identifier: "octicon-git-branch"
    IFOIGitBranch                           = 0xf020,
    /// Identifier: "octicon-git-commit"
    IFOIGitCommit                           = 0xf01f,
    /// Identifier: "octicon-git-compare"
    IFOIGitCompare                          = 0xf0ac,
    /// Identifier: "octicon-git-merge"
    IFOIGitMerge                            = 0xf023,
    /// Identifier: "octicon-git-pull-request-abandoned"
    IFOIGitPullRequestAbandoned             = 0xf009,
    /// Identifier: "octicon-git-pull-request"
    IFOIGitPullRequest                      = 0xf009,
    /// Identifier: "octicon-globe"
    IFOIGlobe                               = 0xf0b6,
    /// Identifier: "octicon-graph"
    IFOIGraph                               = 0xf043,
    /// Identifier: "octicon-heart"
    IFOIHeart                               = 0x2665,
    /// Identifier: "octicon-history"
    IFOIHistory                             = 0xf07e,
    /// Identifier: "octicon-home"
    IFOIHome                                = 0xf08d,
    /// Identifier: "octicon-horizontal-rule"
    IFOIHorizontalRule                      = 0xf070,
    /// Identifier: "octicon-hubot"
    IFOIHubot                               = 0xf09d,
    /// Identifier: "octicon-inbox"
    IFOIInbox                               = 0xf0cf,
    /// Identifier: "octicon-info"
    IFOIInfo                                = 0xf059,
    /// Identifier: "octicon-issue-closed"
    IFOIIssueClosed                         = 0xf028,
    /// Identifier: "octicon-issue-opened"
    IFOIIssueOpened                         = 0xf026,
    /// Identifier: "octicon-issue-reopened"
    IFOIIssueReopened                       = 0xf027,
    /// Identifier: "octicon-italic"
    IFOIItalic                              = 0xf0e4,
    /// Identifier: "octicon-jersey"
    IFOIJersey                              = 0xf019,
    /// Identifier: "octicon-key"
    IFOIKey                                 = 0xf049,
    /// Identifier: "octicon-keyboard"
    IFOIKeyboard                            = 0xf00d,
    /// Identifier: "octicon-law"
    IFOILaw                                 = 0xf0d8,
    /// Identifier: "octicon-light-bulb"
    IFOILightBulb                           = 0xf000,
    /// Identifier: "octicon-link"
    IFOILink                                = 0xf05c,
    /// Identifier: "octicon-link-external"
    IFOILinkExternal                        = 0xf07f,
    /// Identifier: "octicon-list-ordered"
    IFOIListOrdered                         = 0xf062,
    /// Identifier: "octicon-list-unordered"
    IFOIListUnordered                       = 0xf061,
    /// Identifier: "octicon-location"
    IFOILocation                            = 0xf060,
    /// Identifier: "octicon-gist-private"
    IFOIGistPrivate                         = 0xf06a,
    /// Identifier: "octicon-mirror-private"
    IFOIMirrorPrivate                       = 0xf06a,
    /// Identifier: "octicon-git-fork-private"
    IFOIGitForkPrivate                      = 0xf06a,
    /// Identifier: "octicon-lock"
    IFOILock                                = 0xf06a,
    /// Identifier: "octicon-logo-gist"
    IFOILogoGist                            = 0xf0ad,
    /// Identifier: "octicon-logo-github"
    IFOILogoGithub                          = 0xf092,
    /// Identifier: "octicon-mail"
    IFOIMail                                = 0xf03b,
    /// Identifier: "octicon-mail-read"
    IFOIMailRead                            = 0xf03c,
    /// Identifier: "octicon-mail-reply"
    IFOIMailReply                           = 0xf051,
    /// Identifier: "octicon-mark-github"
    IFOIMarkGithub                          = 0xf00a,
    /// Identifier: "octicon-markdown"
    IFOIMarkdown                            = 0xf0c9,
    /// Identifier: "octicon-megaphone"
    IFOIMegaphone                           = 0xf077,
    /// Identifier: "octicon-mention"
    IFOIMention                             = 0xf0be,
    /// Identifier: "octicon-milestone"
    IFOIMilestone                           = 0xf075,
    /// Identifier: "octicon-mirror-public"
    IFOIMirrorPublic                        = 0xf024,
    /// Identifier: "octicon-mirror"
    IFOIMirror                              = 0xf024,
    /// Identifier: "octicon-mortar-board"
    IFOIMortarBoard                         = 0xf0d7,
    /// Identifier: "octicon-mute"
    IFOIMute                                = 0xf080,
    /// Identifier: "octicon-no-newline"
    IFOINoNewline                           = 0xf09c,
    /// Identifier: "octicon-octoface"
    IFOIOctoface                            = 0xf008,
    /// Identifier: "octicon-organization"
    IFOIOrganization                        = 0xf037,
    /// Identifier: "octicon-package"
    IFOIPackage                             = 0xf0c4,
    /// Identifier: "octicon-paintcan"
    IFOIPaintcan                            = 0xf0d1,
    /// Identifier: "octicon-pencil"
    IFOIPencil                              = 0xf058,
    /// Identifier: "octicon-person-add"
    IFOIPersonAdd                           = 0xf018,
    /// Identifier: "octicon-person-follow"
    IFOIPersonFollow                        = 0xf018,
    /// Identifier: "octicon-person"
    IFOIPerson                              = 0xf018,
    /// Identifier: "octicon-pin"
    IFOIPin                                 = 0xf041,
    /// Identifier: "octicon-plug"
    IFOIPlug                                = 0xf0d4,
    /// Identifier: "octicon-repo-create"
    IFOIRepoCreate                          = 0xf05d,
    /// Identifier: "octicon-gist-new"
    IFOIGistNew                             = 0xf05d,
    /// Identifier: "octicon-file-directory-create"
    IFOIFileDirectoryCreate                 = 0xf05d,
    /// Identifier: "octicon-file-add"
    IFOIFileAdd                             = 0xf05d,
    /// Identifier: "octicon-plus"
    IFOIPlus                                = 0xf05d,
    /// Identifier: "octicon-primitive-dot"
    IFOIPrimitiveDot                        = 0xf052,
    /// Identifier: "octicon-primitive-square"
    IFOIPrimitiveSquare                     = 0xf053,
    /// Identifier: "octicon-pulse"
    IFOIPulse                               = 0xf085,
    /// Identifier: "octicon-question"
    IFOIQuestion                            = 0xf02c,
    /// Identifier: "octicon-quote"
    IFOIQuote                               = 0xf063,
    /// Identifier: "octicon-radio-tower"
    IFOIRadioTower                          = 0xf030,
    /// Identifier: "octicon-repo-delete"
    IFOIRepoDelete                          = 0xf001,
    /// Identifier: "octicon-repo"
    IFOIRepo                                = 0xf001,
    /// Identifier: "octicon-repo-clone"
    IFOIRepoClone                           = 0xf04c,
    /// Identifier: "octicon-repo-force-push"
    IFOIRepoForcePush                       = 0xf04a,
    /// Identifier: "octicon-gist-fork"
    IFOIGistFork                            = 0xf002,
    /// Identifier: "octicon-repo-forked"
    IFOIRepoForked                          = 0xf002,
    /// Identifier: "octicon-repo-pull"
    IFOIRepoPull                            = 0xf006,
    /// Identifier: "octicon-repo-push"
    IFOIRepoPush                            = 0xf005,
    /// Identifier: "octicon-rocket"
    IFOIRocket                              = 0xf033,
    /// Identifier: "octicon-rss"
    IFOIRss                                 = 0xf034,
    /// Identifier: "octicon-ruby"
    IFOIRuby                                = 0xf047,
    /// Identifier: "octicon-search-save"
    IFOISearchSave                          = 0xf02e,
    /// Identifier: "octicon-search"
    IFOISearch                              = 0xf02e,
    /// Identifier: "octicon-server"
    IFOIServer                              = 0xf097,
    /// Identifier: "octicon-settings"
    IFOISettings                            = 0xf07c,
    /// Identifier: "octicon-shield"
    IFOIShield                              = 0xf0e1,
    /// Identifier: "octicon-log-in"
    IFOILogIn                               = 0xf036,
    /// Identifier: "octicon-sign-in"
    IFOISignIn                              = 0xf036,
    /// Identifier: "octicon-log-out"
    IFOILogOut                              = 0xf032,
    /// Identifier: "octicon-sign-out"
    IFOISignOut                             = 0xf032,
    /// Identifier: "octicon-smiley"
    IFOISmiley                              = 0xf0e7,
    /// Identifier: "octicon-squirrel"
    IFOISquirrel                            = 0xf0b2,
    /// Identifier: "octicon-star-add"
    IFOIStarAdd                             = 0xf02a,
    /// Identifier: "octicon-star-delete"
    IFOIStarDelete                          = 0xf02a,
    /// Identifier: "octicon-star"
    IFOIStar                                = 0xf02a,
    /// Identifier: "octicon-stop"
    IFOIStop                                = 0xf08f,
    /// Identifier: "octicon-repo-sync"
    IFOIRepoSync                            = 0xf087,
    /// Identifier: "octicon-sync"
    IFOISync                                = 0xf087,
    /// Identifier: "octicon-tag-remove"
    IFOITagRemove                           = 0xf015,
    /// Identifier: "octicon-tag-add"
    IFOITagAdd                              = 0xf015,
    /// Identifier: "octicon-tag"
    IFOITag                                 = 0xf015,
    /// Identifier: "octicon-tasklist"
    IFOITasklist                            = 0xf0e5,
    /// Identifier: "octicon-telescope"
    IFOITelescope                           = 0xf088,
    /// Identifier: "octicon-terminal"
    IFOITerminal                            = 0xf0c8,
    /// Identifier: "octicon-text-size"
    IFOITextSize                            = 0xf0e3,
    /// Identifier: "octicon-three-bars"
    IFOIThreeBars                           = 0xf05e,
    /// Identifier: "octicon-thumbsdown"
    IFOIThumbsdown                          = 0xf0db,
    /// Identifier: "octicon-thumbsup"
    IFOIThumbsup                            = 0xf0da,
    /// Identifier: "octicon-tools"
    IFOITools                               = 0xf031,
    /// Identifier: "octicon-trashcan"
    IFOITrashcan                            = 0xf0d0,
    /// Identifier: "octicon-triangle-down"
    IFOITriangleDown                        = 0xf05b,
    /// Identifier: "octicon-triangle-left"
    IFOITriangleLeft                        = 0xf044,
    /// Identifier: "octicon-triangle-right"
    IFOITriangleRight                       = 0xf05a,
    /// Identifier: "octicon-triangle-up"
    IFOITriangleUp                          = 0xf0aa,
    /// Identifier: "octicon-unfold"
    IFOIUnfold                              = 0xf039,
    /// Identifier: "octicon-unmute"
    IFOIUnmute                              = 0xf0ba,
    /// Identifier: "octicon-unverified"
    IFOIUnverified                          = 0xf0e8,
    /// Identifier: "octicon-verified"
    IFOIVerified                            = 0xf0e6,
    /// Identifier: "octicon-versions"
    IFOIVersions                            = 0xf064,
    /// Identifier: "octicon-watch"
    IFOIWatch                               = 0xf0e0,
    /// Identifier: "octicon-remove-close"
    IFOIRemoveClose                         = 0xf081,
    /// Identifier: "octicon-x"
    IFOIX                                   = 0xf081,
    /// Identifier: "octicon-zap"
    IFOIZap                                 = 0x26A1,
};

/*!
 * GitHub Octicons v3.5.0 https://octicons.github.com
 */
@interface IFOcticons : IFIcon
@end
