/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <OADClient>, OADDrawable<OADDrawableContainer>, OADDrawableProperties;

@interface OADDrawable : NSObject {
    <OADClient> *mClientData;
    OADDrawableProperties *mDrawableProperties;
    BOOL mHidden;
    unsigned long mId;
    OADDrawable<OADDrawableContainer> *mParent;
}

- (id)clientData;
- (id)createOrientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)createWordClientDataWithTextType:(int)arg1;
- (void)dealloc;
- (id)drawableProperties;
- (id)ensureClientDataOfClass:(Class)arg1;
- (BOOL)hidden;
- (unsigned long)id;
- (void)identify;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)parent;
- (void)removeUnnecessaryOverrides;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setId:(unsigned long)arg1;
- (void)setParent:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;

@end
