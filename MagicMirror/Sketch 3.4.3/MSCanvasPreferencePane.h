//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPreferencePane.h"

@class NSButton;

@interface MSCanvasPreferencePane : MSPreferencePane
{
    NSButton *_scaleDownForRetinaButton;
}

+ (id)identifier;
+ (id)title;
+ (id)toolbarIcon;

- (void)adjustColorsAction:(id)arg1;
- (void)awakeFromNib;
- (void)scaleDownForRetinaAction:(id)arg1;
@property(retain, nonatomic) NSButton *scaleDownForRetinaButton; // @synthesize scaleDownForRetinaButton=_scaleDownForRetinaButton;

@end
