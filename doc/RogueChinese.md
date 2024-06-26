# Rogue Manual (A Guide to the Dungeons of Doom)

本文是著名 Rogue 教程 “A Guide to the Dungeons of Doom” 的中文翻译版本，获取 Rogue 游戏可以见本文最后一部分。

## 1. 游戏介绍

你刚刚结束了在当地战士公会的学生生涯。经过大量的练习和汗水，你终于完成了训练，准备开始一场充满危险的冒险。作为对你技能的测试，当地的公会大师们派你进入厄运地牢。你的任务是带回**耶多尔的护身符**（Amulet of Yendor）。完成这个任务的奖励将是在当地公会的全额会员资格。此外，你还可以保留你从地牢带回的所有战利品。

为了准备你的旅程，你得到了一根附魔的短棒，一把弓，和一箭筒的箭，这些都是从远在黑暗山脉的龙的宝藏中取得的。你还配备了精灵制作的盔甲，并得到了足够的食物以到达地牢。你可能是最后一次向家人和朋友告别，然后上路。

你开始前往地牢的路程，经过几天平静的旅行，你看到了标志着厄运地牢入口的古老遗迹。夜晚已深，所以你在入口处扎营，花了一夜在露天的天空下睡觉。早晨，你收拾好武器，穿上盔甲，吃了几乎是最后的食物，然后进入地牢。


## 2. 游戏开始

你刚刚开始了一场《Rogue》游戏。你的目标是尽可能多地收集宝藏，找到耶多尔护身符（Amulet of Yendor），并活着离开末日地牢。屏幕上显示了你在当前地牢层级所经过的地方和所见到的事物的地图。随着你探索更多的层级，这些信息会显示在你面前的屏幕上。

在《Rogue》游戏中，所有命令都是一到两个按键，命令的结果会在屏幕上以图形方式显示。游戏至少需要 24 行 80 列的屏幕大小。如果屏幕更大，也只会使用 24x80 的区域来显示地图。

## 3. 屏幕上的那些东西都是什么意思？

为了理解《Rogue》游戏中的情况，你首先需要了解游戏是如何使用屏幕的。下图是一个《Rogue》游戏屏幕可能的样子的示例：

```text
 ------------
 |..........+
 |..@....]..|
 |....B.....|
 |..........|
 -----+------

 Level: 1  Gold: 0  Hp: 12(12)  Str: 16(16)  Arm: 4  Exp: 1/0
```

### 屏幕底部信息栏

屏幕底部有一些神秘的信息，描述了您当前的状态。以下是这些信息的解释：

- Level：这个数字表示您在地牢中探险的深度。从一开始，随着您深入地牢，这个数字会增加。
- Gold：到目前为止，您找到并保持的金币数量。
- Hp：您当前的和最大的生命值。生命值表示您在死亡前可以承受多少伤害。在战斗中被击中越多，生命值就越低。您可以通过休息来恢复生命值。括号中的数字是您的生命值可以达到的最大数量。
- Str：您当前的力量和迄今为止的最大力量。这可以是小于或等于99的任何整数，或大于或等于1的整数。数字越高，您就越强壮。括号中的数字是您在这场游戏中迄今为止达到的最大力量。
- Arm：您当前的护甲保护。这个数字表示您的护甲在阻挡不友好生物的攻击时的有效性。这个数字越高，护甲越有效。
- Exp：这两个数字表示您当前的经验等级和经验点数。随着您做事，您会获得经验点。在达到特定的经验点总数时，您会提升一个经验等级。您的经验越丰富，您在战斗中的表现就越好，抵抗魔法攻击的能力也越强。

### 屏幕顶行

屏幕顶部的这一行专门用来显示那些无法视觉呈现的描述信息。如果你在顶行看到 “--more--” 的字样，这意味着游戏《Rogue》想要在屏幕上显示另一条信息，但它希望确保你首先阅读了当前的信息。要阅读下一条信息，只需按空格键即可。

### 屏幕的其余部分

屏幕的其余部分显示的是您迄今为止探索过的关卡地图。屏幕上的每个符号都代表着某些东西。下面是原版游戏中符号的含义列表。《Rogue Clone IV》可以通过 PCgraphics 选项配置来绘制更精美的地图。

| 符号 | 含义 |
|-|-|
| `@` | 这个符号代表你，一位冒险者。|
| `-\|` | 这些符号代表房间的墙壁。|
| `+` | 房间的门。|
| `.` | 房间的地板。|
| `#` | 连接房间的通道的地板。|
| `*` | 一堆黄金或金罐。|
| `)` | 某种武器。|
| `]` | 一件护甲。|
| `!` | 装有魔法药水的瓶子。|
| `?` | 通常是一张魔法卷轴的纸片。 |
| `=` | 带有魔法属性的戒指。|
| `/` | 魔法杖或法杖。|
| `^` | 一个陷阱，要小心这些。|
| `%` | 通往其他层级的楼梯。|
| `:` | 一份食物。|
| `A-Z` | 大写字母代表地牢中的各种居民。小心，他们可能会很凶恶和危险。|


## 4. 命令

在《Rogue》中通过输入一个或两个字符来发出命令。大多数命令可以用一个数字前缀来重复执行（例如，输入 “10s” 将执行十次搜索）。对于那些没有意义的命令，数字前缀将被忽略。要取消数字前缀或前导字符，请按 `<ESC>`。命令列表虽然很长，但在游戏中随时可以通过 `？` 命令查看。

以下是命令列表及其简短解释供参考：

- `?` 帮助命令。请求输入一个字符以获取帮助。如果输入 `*`，将列出所有命令，否则将解释您输入的字符的功能。
- `/` 这是 “屏幕上那是什么？” 命令。输入 `/` 后跟随任何您在关卡中看到的字符，将告诉您该字符是什么。例如，输入 `/@` 将告诉您 `@` 符号代表您，即玩家。
- `<Scroll Lock>` 切换快速游戏模式。除了下面描述的键，您还可以使用数字键盘上的方向键来移动。在快速游戏模式下，这些键会让您奔跑而不是行走。当您只想移动一个空间时，请使用 `<SHIFT>` 或 `<CTRL>` 键。
- `h`, `H`, `^H` 向左移动。您向左移动一个空间。如果使用大写的 `H`，您将继续向左移动直到遇到障碍物。这适用于所有移动命令（例如，`L` 表示向 `l` 方向奔跑）。如果使用 `<CTRL>-h`，您将继续向指定方向移动，直到遇到有趣的东西或撞到墙。您应该尝试一下这个命令，因为它非常有用，但很难描述。这也适用于所有移动命令。
- `j` 向下移动。 
- `k` 向上移动。 
- `l` 向右移动。 
- `y` 向左上方对角线移动。
- `u` 向右上方对角线移动。
- `b` 向左下方对角线移动。
- `n` 向右下方对角线移动。
- `t` 投掷物品。这是一个前缀命令。后跟方向时，它会将物品投掷到指定方向。（例如，输入 `th` 将物品投向左边） 
- `f` 战斗直到一方死亡。后跟方向时，这将迫使您与该方向的生物战斗，直到您或它死亡。
- `m` 移动到某物上而不拾取它。这将使您向指定方向移动一个空间，如果那里有可以拾取的物品，它不会拾取。
- `z` 魔杖前缀。将魔杖指向给定方向并发射。即使是非定向的魔杖也必须指向某个方向才能使用。
- `^` 识别陷阱命令。如果地图上有一个陷阱，而你不记得它是什么类型的，你可以通过靠近它并输入“^”加上移动到它上方的方向来让盗贼提醒你。
- `s` 搜索陷阱和秘密门。检查你周围每个相邻的空间是否存在陷阱或秘密门。即使那里有东西，你也有很大可能找不到，所以你可能需要搜索一段时间才能找到。
- `>` 下楼梯到下一个层级。不出所料，这只能在你站在楼梯上时进行。
- `<` 上楼梯到上一个层级。如果你没有拥有耶德尔护身符，这是无法完成的。
- `.` 休息。这是“什么都不做”的命令。适合等待和恢复。
- `,` 捡起物品。如果你站在某物上，这个命令会捡起你当前站立的物品。
- `i` 查看物品清单。列出你背包中携带的物品。
- `I` 选择性查看物品。告诉你背包中单个物品的详细信息。
- `q` 喝下你携带的药水之一。
- `r` 阅读你背包中的卷轴之一。
- `e` 吃掉你背包中的食物。
- `w` 挥舞武器。从背包中取出一件武器用于战斗，替换你当前使用的武器（如果有的话）。
- `W` 穿上盔甲。你一次只能穿一套盔甲。
- `T` 脱下盔甲。你不能脱下被诅咒的盔甲。
- `P` 戴上戒指。你一次只能戴两个戒指（每只手一个）。如果你没有戴任何戒指，这个命令会询问你想戴在哪只手上，否则，它会放在未使用的手上。
- `R` 取下戒指。如果你只戴了一枚戒指，这个命令会将其取下。如果你戴了两枚，它会询问你想取下哪一枚。
- `d` 丢弃物品。从你的背包中取出某物并将其放在地上。每个空间只能容纳一个物品。如果你正在使用或穿戴被诅咒的物品，则无法丢弃它。
- `c` 为物品命名。如果你想记住背包中某种物品的某些信息，可以使用命名命令为该类型的物品命名。这通常在你捡起药水、卷轴、戒指或法杖后但在其真正被识别之前使用。每种类型的卷轴和药水在第一次使用后将被识别。
- `o` 检查和设置选项。此命令在选项部分有进一步解释。
- `^R` 重绘屏幕。如果错误信息或传输错误弄乱了显示，这个命令很有用。
- `^P` 打印最后一条消息。当消息在你阅读之前消失时，这个命令很有用。连续重复此命令将显示最后五条消息。
- `<ESC>` 取消命令、前缀或计数。
- `!` 推出到命令行 shell。
- `Q` 退出游戏。
- `S` 将当前游戏保存到文件中。注意：Rogue在你启动恢复的游戏时会删除保存文件。这是为了防止人们在危险位置前保存游戏，然后在死亡时重新启动它。要恢复保存的游戏，在被问到 “Who are you?” 时提供相同的玩家名称，或将文件名作为参数提供给 rogue，如 `rogue save_file` 。
- `v` 打印程序版本号。
- `)` 打印你当前使用的武器
- `]` 打印你当前穿戴的盔甲
- `=` 打印你当前佩戴的戒指
- `&` 将屏幕的副本保存到文件SCREEN.TXT中。
- `^A` 显示你的实际和有效的平均健康点数增加。在显示的神秘行中，`R-Hp` 是通过获得经验等级增加的最大健康点数的平均值。`E-Hp` 是包括其他最大健康点数变化在内的每个经验等级的平均增加值。你获得的 “其他” 健康点数（!）和失去的（V）也会显示。

## 5. 房间

当你进入地牢中的房间时，房间会被点亮。离开房间后，房间内的所有怪物都会从屏幕上消失。在走廊的黑暗中，你只能看到你周围一格的空间。

## 6. 战斗

如果你看到一个怪物并且想要与之战斗，只需尝试冲向它。很多时候，你遇到的怪物会自顾自地行动，除非你攻击它。通常情况下，谨慎是勇气的一部分。

## 7. 你可以找到的物品

当你在地牢中找到某样东西时，通常会想要捡起它。在《Rogue》游戏中，这是通过走到物品上方来实现的（除非你使用了 “m” 前缀）。如果你携带的物品太多，程序会提醒你并且不会捡起新物品，否则它会将新物品添加到你的背包中，并告知你刚刚捡起了什么。

许多对物品操作的指令都必须提示你选择要使用的物品。你可以输入 “*” 来获取逻辑选择列表。然而，有时你并不想看到整个列表，而是想查看特定类别的物品，比如卷轴、药水、武器等。在这种情况下，你可以分别输入 `?!=:/)]`，以查看你的卷轴、药水、戒指、食物、魔杖、武器或盔甲的菜单。这在你想要丢弃特定物品，比如卷轴，而不想从整个列表中挑选，而只想从卷轴集合中挑选时尤为有用。如果你改变主意并且不想执行该指令，只需输入 `<ESC>`，该指令就会被取消。

某些物品，如盔甲和武器，很容易区分。而其他物品，如卷轴和药水，则有根据类型变化的标签。在游戏过程中，同一类型且标签相同的两个物品是相同的。然而，这些标签在每次游戏中都会变化。

当你使用这些带标签的物品之一时，其效果可能会变得显而易见。此时，药水或卷轴会被识别，但其他物品不会。如果你想给这些其他物品命名以便以后认出它们，你可以使用 “call” 指令。

### 武器

有些武器，如箭，是成捆的，但大多数武器是逐个出现的。要使用武器，你必须持握它。若要用弓射箭，你必须先持握弓，然后掷出箭。你一次只能持握一件武器，但如果你当前持握的武器被诅咒了，你就无法更换武器。使用武器的命令是 “w”（持握）和 “t”（投掷）。

### 盔甲

地牢里散落着各种各样的盔甲。有些是被施了魔法的，有些是被诅咒的，还有一些是普通的。不同类型的盔甲提供的防护能力也各不相同。盔甲的防护能力越高，它对抗怪物攻击的保护就越强。以下是各种盔甲类型及其正常防护能力的列表：


|Type|Protection|
|---|---|
|None|0|
|Leather armor|2|
|Ring mail|3|
|Scale mail|4|
|Chain mail|5|
|Banded mail / Splint mail|6|
|Plate mail|7|

如果一件盔甲被施了魔法，它的防护能力将高于普通盔甲。如果一套盔甲被诅咒了，它的防护能力会降低，而且你将无法将其脱下。然而，并不是所有防护能力低于普通盔甲的盔甲都是被诅咒的。

使用盔甲的指令是 “W”（穿上）和 “T”（脱下）。

### 卷轴

卷轴上带有未知语言的标题。阅读卷轴后，它会从你的背包中消失。使用卷轴的指令是 “r”（阅读）。

### 药水

药水根据瓶中液体的颜色进行标记。饮用后会消失。使用药水的指令是 “q”（饮用）。

### 法杖和魔杖

法杖和魔杖的功能相同。法杖通常由某种木材制成；魔杖则由某种金属或骨头制成。它们通常用于远距离施法，因此你必须将它们指向你希望影响的目标才能使用。不过，有些法杖不受指向方向的影响。法杖带有多个魔法充能，数量是随机的，当充能耗尽时，法杖就只是一块木头或金属。

使用魔杖或法杖的指令是 'z'（zap）。

### 戒指

戒指是非常有用的物品，因为它们的魔力相对持久，不像药水、卷轴和法杖那样效果短暂。当然，坏的戒指也更强大。大多数戒指还会导致你更快地消耗食物，消耗速度因戒指类型而异。戒指通过其镶嵌的宝石来区分。使用戒指的命令是 “P”（戴上）和 “R”（取下）。

### 食物

食物是维持你生存所必需的。如果你长时间不吃东西，你会昏厥，最终会饿死。使用食物的命令是 “e”（吃）。

## 8. 选项

由于个人品味和对 Rogue 行为方式的不同理解，您可以设置一组选项，使 Rogue 以各种不同的方式表现。

### 设置选项

有两种方法可以设置选项。第一种是使用 Rogue 的 'o' 命令；第二种是使用  `ROGUEOPTS` 环境变量。

##### 使用 'o' 命令

当您在 Rogue 中输入 'o' 时，它会清除屏幕并显示所有选项的当前设置。然后将光标放在第一个选项的值旁边，等待您输入。您可以输入 `<ENTER>` 以转到下一个选项，输入 '-' 以返回上一个选项，输入 `<ESC>` 以返回游戏，或者为选项赋值。对于布尔选项，只需输入 't' 表示真或 'f' 表示假。对于字符串选项，输入新值并按  `<ENTER>`。

##### 使用 ROGUEOPTS 变量

`ROGUEOPTS` 变量是一个字符串，包含各种选项的初始值的逗号分隔列表。可以通过列出布尔变量的名称来打开它们，或者在名称前加上 "no" 来关闭它们。因此，要设置一个环境变量，使跳跃开启，passgo 关闭，并将名称设置为 "Blue Meanie"，请使用以下命令：

```
C:>set ROGUEOPTS=noPCgraphics,jump,nopassgo,name:Blue Meanie
```

上面选项设置了玩家名字，设置了 `noPCgraphics` 来禁用 ASCII 扩展字符，这样在中文操作系统下，不会显示成乱码，会用标准的 0-126 的 ASCII 符号来显示。

以下是选项列表及其各自的说明。每个选项的默认值用方括号括起来。对于字符串选项，超过四十个字符的输入将被忽略。

### 选项列表

以下是选项列表及其各自的说明。每个选项的默认值用方括号括起来。对于字符串选项，超过四十个字符的输入将被忽略。

- `jump` (`nojump`)：如果设置了此选项，运行中的移动将不会显示，直到你到达移动的终点。这可以节省大量的CPU和显示时间。
- `passgo` (`nopassgo`)：在通道中跟随转弯。如果你在通道中奔跑并撞上石头或墙壁，rogue 会查看是否可以向右或向左转。如果只能向一个方向转，它会转向那个方向。如果可以向两个方向转或都不能转，它会停下来。这个算法有时会导致一些稍微令人困惑的情况，这就是为什么默认设置为不随走随停。
- `skull` (`noskull`)：如果你被杀死，打印出一个骷髅或墓碑。墓碑选项也会做同样的事情。
- `color` (`nocolor`)：绘制地图时使用漂亮的颜色。
- `PCgraphics` (`noPCgraphics`)：使用扩展的 ASCII 字符，就像 IBM PC rogue 一样，想要中文系统下正常显示可以用 `noPCgraphics`。
- `name` (`Rodney`)：这是你角色的名字。如果你进入前十名得分榜，它将被使用。
- `fruit` (`slime-mold`)：这应该是你喜欢吃的一种水果的名字。它基本上是 rogue 在几个地方使用的一个奇思妙想。

## 9. 评分

Rogue 会在你的机器上维护一个最高得分者或得分的列表。如果你的得分高于列表上的其他人，或者你在列表上的得分超过了你之前的得分，你将以当前的名字被插入到适当的位置。

如果你退出游戏，你将带着所有的金币离开。然而，如果你在厄运地牢中被杀，你的尸体将被送到你的近亲那里，同时 90% 的金币也会被送过去；剩下的 10% 金币将被地牢的巫师作为费用保留。这应该让你考虑是否要最后一次攻击那个怪物并可能活下来，或者退出并保留你现有的所有东西。如果你退出，你确实会得到所有的金币，但如果你挥剑并活下来，你可能会找到更多。

如果你只是想看看当前的顶级玩家/游戏列表，你可以输入

```text
C:>rogue -s
```

## 10. 致谢

《Rogue》最初由格伦·威奇曼（Glenn Wichman）和迈克尔·托伊（Michael Toy）构思。肯·阿诺德（Ken Arnold）和迈克尔·托伊（Michael Toy）随后优化了用户界面，并添加了大量新功能。不久之后，乔恩·莱恩（Jon Lane）加入了《Rogue》团队，并将游戏改编为适用于 IBM PC。四人共同为各种计算机系统制作了多个版本的《Rogue》，并将其商业化销售。

蒂莫西·斯托尔（Timothy Stoehr）编写了《Rogue》5.3 克隆版本 I 和 II，并将其捐赠给加利福尼亚大学伯克利分校。伯克利的工作人员在标准版《Rogue》停止免费提供后，开始随 BSD UNIX® 操作系统分发《Rogue》5.3 克隆版本 III。UNIX是 The Open Group 在美国及其他国家的注册商标。

很久以后，迈克尔·莱霍泰（Michael Lehotay）将《Rogue》克隆版改编为 DOS 版本，并发布为 DOS《Rogue》克隆版。尼克·斯特拉古齐（Nick Straguzzi）添加了对颜色和 IBM PC 图形的支持，两人共同发布了适用于 DOS 和 Windows 的《Rogue》克隆版IV。《Rogue》克隆版 IV 保留了 DOS《Rogue》克隆版的版本号，从 2.1 版本开始。


## 附1：通关经验

- 没路可走时，不是游戏出错，而是有隐藏门和隐藏通路，在怀疑有隐藏门和路的周围一格多按几次 `s` 进行搜索可以发现（每按一次大概有 25% 的概率发现，所以重点点地方每走一步多按几下）。
- 注意食物规划，太过饥饿会晕倒，持续晕倒会死亡。
- 碰到怪多的地方先逃跑到狭长通道，边走边恢复血，不停的喝药和远程攻击。
- 厉害的不会动的盖屋可用 `t` 命令远程投掷伤害，或者 `z` 命令魔杖远程攻击。
- 注意冰冻怪 `I` ，如果不动的话，先别主动招惹，清空周围的怪再量力而行。
- 拿到耶多尔附身符后，碰到楼梯 `%` 可以用 `<` 命令返回上层，这时你可以用 `<` 和 `>` 在多层间来回探索不着急去一层离开。
- `rogue-clone` 有巫师模式，按 `Ctrl+w` 并输入 `bathtub` 可以开启，开启后 `Ctrl+s` 可以查看全地图，很管用，但开启巫师模式后分数不记录到排行榜。


## 附2：游戏获取

对于 Linux （debian/ubuntu）而言，默认包管理器中已经包含 rogue，用下面命令安装：

```bash
sudo apt-get install bsdgames-nonfree
```

然后输入 `rogue` 即可进入游戏；同时 Windows 用户可以二选一:

- [https://rogueclone.sourceforge.net](https://rogueclone.sourceforge.net)
- [https://github.com/skywind3000/rogue-clone/releases](https://github.com/skywind3000/rogue-clone/releases)

注意：下载第一个的话，中文系统下要设置环境变量：

```
set ROGUEOPTS=noPCgraphics
```

禁用扩展字符，避免乱码。

