#define CMDLENGTH 45
#define DELIMITER "   "
#define CLICKABLE_BLOCKS
#define STATUSSEP ";"
#define STATUSSEPINDEX 6

const Block blocks[] = {
	BLOCK("sb-pacpackages",    1800,    17),
	BLOCK("sb-mail",           1800,    18),
	BLOCK("sb-rss",            1800,    19),
	BLOCK("sb-battery",        5,       20),
	BLOCK("sb-internet",       5,       21),
	BLOCK("sb-date",           1,       22), /* position of extra status split */
	BLOCK("sb-disk",           1800,    23),
	BLOCK("sb-memory",         3,       24),
	BLOCK("sb-cpu",            3,       25),
};
