/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _deferredFrame;
    float _deferredMaxTotalWidth;
    float _deferredMinSegmentWidth;
    int _deferredSegmentedControlStyle;
    NSMutableArray *_deferredSegments;
    unsigned int _deferredSelectedSegmentIndex;
    BOOL _deferredSizeToFit;
    BOOL _isDeferringInterfaceUpdates;
}

@property(getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;

- (void)_commitDeferredInterfaceUpdates;
- (void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_saveCurrentStateAsDeferred;
- (void)_saveSegmentsAsDeferred;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)imageForSegmentAtIndex:(unsigned int)arg1;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (BOOL)isDeferringInterfaceUpdates;
- (unsigned int)numberOfSegments;
- (void)removeAllSegments;
- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (int)segmentedControlStyle;
- (int)selectedSegmentIndex;
- (void)setDeferringInterfaceUpdates:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)sizeToFit;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;

@end
