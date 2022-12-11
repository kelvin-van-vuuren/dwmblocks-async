#define CMDLENGTH 45
#define DELIMITER "   "
#define CLICKABLE_BLOCKS
#define STATUSSEP ";"
#define STATUSSEPINDEX 10
// #define LEADING_DELIMITER 1

const Block blocks[] = {
	BLOCK("sb-forecast-rain",  18000,   15),
	BLOCK("sb-forecast-low",   18000,   16),
	BLOCK("sb-forecast-high",  18000,   17),
	BLOCK("sb-pacpackages",    0,       18),
	BLOCK("sb-mail",           0,       19),
	BLOCK("sb-rss",            0,       20),
	BLOCK("sb-battery",        5,       21),
	BLOCK("sb-internet",       5,       22),
	BLOCK("sb-date",           1,       23),
	BLOCK("sb-clock",          1,       24), /* position of extra status split */
	BLOCK("sb-disk",           1800,    25),
	BLOCK("sb-memory",         3,       26),
	BLOCK("sb-cpu",            3,       27),
};
