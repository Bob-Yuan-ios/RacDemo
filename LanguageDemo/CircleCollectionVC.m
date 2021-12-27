//
//  CircleCollectionVC.m
//  LanguageDemo
//
//  Created by Bob on 2021/11/13.
//

#import "CircleCollectionVC.h"

// 生成一个字符串
 
#define KGCount 5
#define pageWidth ([[UIScreen mainScreen] bounds].size.width - 130)
@interface CircleCollectionVC ()
<
UICollectionViewDelegate,
UICollectionViewDataSource
>

@property (strong, nonatomic) UICollectionView *collectionView;
/** 模型数组 */
@property (strong, nonatomic) NSMutableArray *dataSourceArr;

@property (strong, nonatomic) UIPageControl *pageControl;

@property (strong, nonatomic) NSTimer *timer;

@property (assign, nonatomic) NSUInteger selectedIndex;

@end

@implementation CircleCollectionVC

 
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
//    _selectedIndex = 0;
//    // 在100组中间开始展示图片
//    [self.collectionView scrollToItemAtIndexPath:[NSIndexPath indexPathForItem:0 inSection:_selectedIndex] atScrollPosition:UICollectionViewScrollPositionLeft animated:YES];
//
//    // 添加定时器
//    [self addTimer];
//
//    // 添加pageControll
//    UIPageControl *pageControl = [[UIPageControl alloc] init];
//    pageControl.center = CGPointMake(self.view.bounds.size.width / 2, 240);
//    pageControl.pageIndicatorTintColor = [UIColor redColor];
//    pageControl.currentPageIndicatorTintColor = [UIColor blackColor];
//    [self.view addSubview:pageControl];
//    pageControl.numberOfPages = 5;
//    self.pageControl = pageControl;
    
    UIImageView *image1 = [[UIImageView alloc] initWithFrame:CGRectMake(100, 100, 100, 100)];
    [self.view addSubview:image1];
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (NSMutableArray *)dataSourceArr {
    if (!_dataSourceArr) {
        // 模型数组
        _dataSourceArr = [NSMutableArray new];
        for (int i = 0; i < KGCount; i++) {
            [_dataSourceArr addObject:@(i)];
        }
    }
    return _dataSourceArr;
}

- (UICollectionView *)collectionView{
    if (!_collectionView) {
        UICollectionViewFlowLayout *flowLayout = [[UICollectionViewFlowLayout alloc]init];
        flowLayout.minimumLineSpacing = 0;
        flowLayout.minimumInteritemSpacing = 0;
        flowLayout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
        
        CGFloat width = CGRectGetWidth(self.view.bounds);
        flowLayout.itemSize = (CGSize){width - 130, 160};
        
        _collectionView = [[UICollectionView alloc] initWithFrame:CGRectMake( 15, 100, width - 30, 160) collectionViewLayout:flowLayout];
        [self.view addSubview:_collectionView];
        
        _collectionView.dataSource = self;
        _collectionView.delegate = self;
//        _collectionView.bounces = YES;
//        _collectionView.scrollEnabled = NO;
        _collectionView.showsHorizontalScrollIndicator = NO;

        [_collectionView registerClass:[UICollectionViewCell class] forCellWithReuseIdentifier:@"UICollectionViewCell"];
    }
    return _collectionView;
}
/**
 *  添加定时器
 */
- (void)addTimer {
    // 1.创建定时器
    NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:5.f target:self selector:@selector(nextPage) userInfo:nil repeats:YES];

    // 2.把定时器添加到mainRunLoop(主线程也会抽空处理NSTimer的事件)(如果不添加到mainRunLoop，用户做其他操作的时候，定时器就会停止工作)
    [[NSRunLoop mainRunLoop] addTimer:timer forMode:NSRunLoopCommonModes];
    self.timer = timer;
}

/**
 *  移除定时器
 */
- (void)removeTimer {
    // 停止定时器
    [self.timer invalidate];
    // 清空定时器
    self.timer = nil;
}

/**
 *  显示下一页（保证使用定时器不会把100组都轮播完）
 */
- (void)nextPage {
    _selectedIndex += 1;
    if (_selectedIndex >= self.dataSourceArr.count) {
        _selectedIndex = 0;
        [self.collectionView setContentOffset:CGPointMake(pageWidth * _selectedIndex, self.collectionView.contentOffset.y) animated:NO];

//        NSIndexPath *nextIndexPath = [NSIndexPath indexPathForItem:_selectedIndex inSection:0];
//        // 3.通过动画滚动到下一个位置
//        [self.collectionView scrollToItemAtIndexPath:nextIndexPath atScrollPosition:UICollectionViewScrollPositionRight animated:NO];
    }else{
//        NSIndexPath *nextIndexPath = [NSIndexPath indexPathForItem:_selectedIndex inSection:0];
//        [self.collectionView scrollToItemAtIndexPath:nextIndexPath atScrollPosition:UICollectionViewScrollPositionRight animated:YES];
        [self.collectionView setContentOffset:CGPointMake(pageWidth * _selectedIndex, self.collectionView.contentOffset.y) animated:YES];

    }
   
   
    // 4.显示页码
    self.pageControl.currentPage = _selectedIndex%5;
}
 

#pragma mark - UICollectionViewDataSource
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView {
    return KGCount;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return self.dataSourceArr.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"UICollectionViewCell" forIndexPath:indexPath];
   
    cell.contentView.backgroundColor = [@[[UIColor redColor], [UIColor yellowColor], [UIColor purpleColor], [UIColor grayColor], [UIColor greenColor]] objectAtIndex:indexPath.row%5];
   
    return cell;
}

- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath{
    NSLog(@"didSelectedItem indexPath is:(%ld)", (long)indexPath.row);
}

#pragma mark - 监听collectionView滚动
/**
 *  用户开始拖拽collectionView
 */
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
    [self removeTimer];
}

- (void)scrollViewWillEndDragging:(UIScrollView *)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)targetContentOffset{
    
    
    CGFloat x = targetContentOffset->x;
 
    CGFloat movedX = x - pageWidth * _selectedIndex;
 
    if (x == 0) {
        _selectedIndex = KGCount/2;
        NSLog(@"velocity.x:::(%lf)", velocity.x);
        if(fabs(velocity.x) >= 1){
            targetContentOffset->x = pageWidth * _selectedIndex;
            [self.collectionView setContentOffset:CGPointMake(pageWidth * _selectedIndex, scrollView.contentOffset.y) animated:NO];
        }
    }else{
        if (movedX < -pageWidth * 0.5) {
            // Move left
            _selectedIndex -= 1;
        } else if(movedX > pageWidth * 0.5){
            // Move right
            _selectedIndex += 1;
        }
        
        if(fabs(velocity.x) >= 1){
            targetContentOffset->x = pageWidth * _selectedIndex;
        } else {
            
            targetContentOffset->x = scrollView.contentOffset.x;
            if (_selectedIndex < 0 || _selectedIndex > KGCount) {
                _selectedIndex = KGCount/2;
                [scrollView setContentOffset:CGPointMake(pageWidth * _selectedIndex, scrollView.contentOffset.y) animated:NO];
                return;
            }
            [scrollView setContentOffset:CGPointMake(pageWidth * _selectedIndex, scrollView.contentOffset.y) animated:YES];
        }

    }
    

}

/**
 *  当用户停止拖拽(手指离开)
 */
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
    [self addTimer];
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    NSInteger page = (int)(scrollView.contentOffset.x / scrollView.bounds.size.width + 0.5) % 5;
    self.pageControl.currentPage = page;
}

- (void)testNSTimer:(UIButton *)sender {
    for (int i = 0; i < 10; i ++) {
        NSLog(@"测试：如果NSTimer不加入mainRunLoop的情况下，点击button，计时器是否还会工作--%d", i);
    }
}

@end
