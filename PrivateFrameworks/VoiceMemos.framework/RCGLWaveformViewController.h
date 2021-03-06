/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCWaveformDataSource>, <RCWaveformViewDelegate>, CADisplayLink, NSMutableArray, NSTimer, RCAcousticAnnotationView, RCGLWaveformRenderer, RCWaveformSelectionOverlay, UIColor, UIScrollView;

@interface RCGLWaveformViewController : UIViewController <UIScrollViewDelegate, RCGLWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate> {
    struct { 
        double beginTime; 
        double endTime; 
    struct { 
        double beginTime; 
        double endTime; 
    struct { 
        double beginTime; 
        double endTime; 
    RCAcousticAnnotationView *_acousticAnnotationView;
    double _autoscrollBaseDuration;
    double _autoscrollRate;
    BOOL _autoscrolling;
    UIColor *_backgroundColor;
    double _currentTime;
    unsigned int _currentTimeDisplayOptions;
    <RCWaveformViewDelegate> *_delegate;
    CADisplayLink *_displayLink;
    double _duration;
    NSTimer *_overlayAutoscrollTimer;
    int _playbackState;
    RCGLWaveformRenderer *_rendererController;
    float _resumingToForegroundAutoscrollRate;
    BOOL _screenUpdatesDisabled;
    UIScrollView *_scrollView;
    BOOL _scrubbing;
    BOOL _scrubbingEnabled;
    } _selectedTimeRange;
    BOOL _selectedTimeRangeEditingEnabled;
    RCWaveformSelectionOverlay *_selectionOverlay;
    float _selectionVisibleMargin;
    double _timeBeganAutoscrolling;
    NSMutableArray *_timeMarkerViews;
    BOOL _timeMarkerViewsNeedInitialLayout;
    BOOL _timeMarkerViewsUpdatesDisabled;
    } _visibleTimeRange;
    } _visibleTimeRangeBeforeSelectionTracking;
}

@property(getter=isAutoscrolling,readonly) BOOL autoscrolling;
@property(retain) UIColor * backgroundColor;
@property double currentTime;
@property unsigned int currentTimeDisplayOptions;
@property <RCWaveformDataSource> * dataSource;
@property <RCWaveformViewDelegate> * delegate;
@property double duration;
@property int playbackState;
@property BOOL screenUpdatesDisabled;
@property BOOL scrubbingEnabled;
@property struct { double x1; double x2; } selectedTimeRange;
@property(getter=isSelectedTimeRangeEditingEnabled) BOOL selectedTimeRangeEditingEnabled;
@property float selectionVisibleMargin;
@property struct { double x1; double x2; } visibleTimeRange;
@property(retain) UIColor * waveformColor;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_autoscrollOverlayIfNecessary;
- (void)_displayLinkDidUpdate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForTimeMarkerView:(id)arg1;
- (void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
- (void)_scrollViewPanGestureRecognized:(id)arg1;
- (void)_setSelectedTimeRange:(struct { double x1; double x2; })arg1 updateVisibleTimeRange:(BOOL)arg2 notifyDelegate:(BOOL)arg3 animationDuration:(double)arg4;
- (void)_setTimeMarkerViewUpdatesDisabled:(BOOL)arg1;
- (void)_startDisplayLink;
- (void)_stopDisplayLink;
- (void)_updateAnnotationViews;
- (void)_updateCurrentTimeDisplay;
- (void)_updateSelectionOverlayWithAnimationDuration:(double)arg1;
- (void)_updateVisibleAreaWithAnimationDuration:(double)arg1;
- (void)_updateWaveformView;
- (struct { double x1; double x2; })_visibleTimeRangeForCurrentSelectionTimeRange;
- (id)_waveformRenderer;
- (id)backgroundColor;
- (void)beginAutoscrollingAtTime:(double)arg1 atRate:(float)arg2;
- (float)currentPlayheadPosition;
- (double)currentTime;
- (unsigned int)currentTimeDisplayOptions;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isAutoscrolling;
- (BOOL)isSelectedTimeRangeEditingEnabled;
- (int)playbackState;
- (BOOL)screenUpdatesDisabled;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrubbingEnabled;
- (struct { double x1; double x2; })selectedTimeRange;
- (float)selectionVisibleMargin;
- (void)setBackgroundColor:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTimeDisplayOptions:(unsigned int)arg1;
- (void)setDataSource:(id)arg1 currentTime:(double)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setScreenUpdatesDisabled:(BOOL)arg1;
- (void)setScrubbingEnabled:(BOOL)arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1;
- (void)setSelectedTimeRangeEditingEnabled:(BOOL)arg1;
- (void)setSelectionVisibleMargin:(float)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2 completionBlock:(id)arg3;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)setWaveformColor:(id)arg1;
- (void)stopAutoscrolling;
- (struct { double x1; double x2; })timeRangeByInsettingVisibleTimeRange:(struct { double x1; double x2; })arg1 inset:(float)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (struct { double x1; double x2; })visibleTimeRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })waveformBoundaryRect;
- (id)waveformColor;
- (void)waveformRenderer:(id)arg1 contentWidthDidChange:(float)arg2;
- (void)waveformRendererContentDidFinishLoading:(id)arg1;
- (void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3;
- (float)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
- (double)waveformSelectionOverlay:(id)arg1 timeForOffset:(float)arg2;
- (void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3;
- (struct { double x1; double x2; })waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(struct { double x1; double x2; })arg2 isTracking:(BOOL)arg3;

@end
