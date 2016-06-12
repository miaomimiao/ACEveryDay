很惋惜的一场比赛，比赛前我想了很多个结局，可能是银牌中等，银牌末尾，要是运气好的可能能混一个金牌回来。。但是银首这个真的是超乎我意料之外。。。

开始比赛的不久我就看到了K题，一个作为签到题的存在，开始习惯性的先敲输入输出。写完输入输出之后感觉没有比较好写的思路。这个时候洪丰告诉我A题是更水的题。同时金学也发现了K是个水题。比较了一下A更简单，于是让洪丰上去敲A，我下来冷静一下。洪丰敲完之后交了上去。

<u>A  Julyed 1/7</u>

因为我还是没有什么比较简单好敲的K的思路，于是让金学去敲K，我和洪丰接着去看题。在金学敲的时候洪丰发现E题也是水题，我看到B感觉是一个搜索的样子，但是不是很小写。E是一个游戏背景的题，正好我们都玩过这个游戏。这个时候金学敲完了K。调试了一样样例能过，交了一发发现居然WA了。把他的代码打印出来让他debug。然后我上去敲E。很快就敲完了，调试了一发过了样例就交了。

<u>E The Binding of Issac 1/31</u>

在我敲K的时候让洪丰去接着看题，金学看到了一个代码的bug，改了一下交上去还是没过，在敲其他题的时候我想到了K题可以用栈来写会简单很多。然后我劝金学去看别的题。我重写了一遍K，也是调试了样例就交上去了。

<u>K Reversed Words 3/44</u>

一时机时又空了下来，虽然B没怎么想清楚但是搜索我应该很熟练了才对。。就写了一发。写的时候看了一下榜，发现大家开始纷纷过了C，让洪丰去看C。于是过了样例随手打了一些数据感觉没有错就交了。

<u>B Fibonacci 1/59</u>

洪丰看完C告诉我这就是裸的最短路，于是我先行写了一个spfa的板子。写完了跑了一发答案不对，让和他重新读了一遍题发现是最短路上的第一个节点。让后我加了一个dfs，过了样例交了上去。

<u>C Proxy 1/90</u>

接着一起看题，发现G是个博弈。但是和一般的博弈不一样。感觉这种题，套路都是打个表看一下。遇事不决打个表，发现有好多个零的样子，然后判断一下不输出为0的。和金学发现二的幂次，像4，8，16，64也都是0。其它的偶数都是非零的数，并且出现的数字集合很少，从小到大排一下就是1,4,13,40,121...不负责任猜测了一下是不是上一项$\times 3 + 1$，推测下一项是367，往后找了一下诶还真是。然后卡住了。。。看了一下这个套路，感觉有点像是二进制表示中一的个数。然后打出来发现能吻合起来了。。。感觉这个题要过了的样子然后照着这个规律很开心的敲了一发。。。很开心的交了上去。。交的时候还给金学奶了一口，这波稳了。。。。然后。。评测机并不想理你并且给你返回了一个WA。

debug的时候金学问我是不是会爆int。。虽然我的公式应该是严格在int范围内的，但是还是改了一发又交了上去，咦

<u>G Triple Nim 2/132</u>

然后就陷入了漫长的卡题期。J题又是一个游戏背景的题，不过题面也特别的长。我读了一下发现没读懂。让洪丰去读题。读完之后出现了两个版本的题意。。然后我又去读了一下。发现和第一次理解的题意比起来，实际的题意简单很多，写了一发交了上去，一个WA。。检查了一下好像没什么东西好改的。。仔细一看输出的答案差了一个空格。。然后改了又交了一发

<u>J Execution of Paladin 2/172</u>

我看了一下F感觉可做的样子但是我的方法时间复杂度会达到恐怖的$O(50^6)$。。显然是会超时的。。然后就一直在想该如何压缩状态。同时洪丰和金学发现D题好像是个模拟，感觉是个很裸的模拟。。但是直接模拟的话时间复杂度正好会超一个$logn$。。不过机时还是空着，就让他们先写了。。然后过了样例交了上去。不出意外返回T了一发。我觉得TLE就是因为排序的过程中多出来的一log。突然想到可以归并。归并的话就可以去掉这个log了。很开心的写了归并交上去了

<u>D Swiss-system tournament 2/262</u>

这个时候时间只剩下半个小时了，权衡了一下F我是确实想不出来了，H这个模拟好像还可以抢救一下，然后我就去写这个模拟。写到最后五分钟调试出了样例，但是交上去之后还是WA。。。到最后还是没有写出来这个题，比赛就结束了

<u>H Memory Leak 2</u>

**The_witness 8 897** 

这场比赛怎么说呢。。感觉刚开始的时候完全不在状态，遇到最简单的题的思路也会卡题，感觉和$C^4$是一样的节奏。。从半个小时之后才慢慢的回过劲来有了在比赛的感觉。

中期的几个题还是比较稳的。能找到G题的规律和想到D题的归并感觉还是有一定的运气的成分，但是F没有想出来以及J题的漫长的读题还是很惋惜。K题和C题应该能更快的写出来才对。总结一下就是自己的实力还是不够。

很幸运这次省赛没有网络流，Splay，SA的题。这些我提上日程最后因为这样那样的原因没有去做的知识点

接下来的计划就是写写图论，写写DP，如果可以的话也学几个个新鲜的数据结构


