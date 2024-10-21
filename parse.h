#define TK_SEMI                             1
#define TK_EXPLAIN                          2
#define TK_QUERY                            3
#define TK_PLAN                             4
#define TK_BEGIN                            5
#define TK_TRANSACTION                      6
#define TK_DEFERRED                         7
#define TK_IMMEDIATE                        8
#define TK_EXCLUSIVE                        9
#define TK_COMMIT                          10
#define TK_END                             11
#define TK_ROLLBACK                        12
#define TK_SAVEPOINT                       13
#define TK_RELEASE                         14
#define TK_TO                              15
#define TK_TABLE                           16
#define TK_CREATE                          17
#define TK_IF                              18
#define TK_NOT                             19
#define TK_EXISTS                          20
#define TK_TEMP                            21
#define TK_LP                              22
#define TK_RP                              23
#define TK_AS                              24
#define TK_COMMA                           25
#define TK_WITHOUT                         26
#define TK_ABORT                           27
#define TK_ACTION                          28
#define TK_AFTER                           29
#define TK_ANALYZE                         30
#define TK_ASC                             31
#define TK_ATTACH                          32
#define TK_BEFORE                          33
#define TK_BY                              34
#define TK_CASCADE                         35
#define TK_CAST                            36
#define TK_CONFLICT                        37
#define TK_DATABASE                        38
#define TK_DESC                            39
#define TK_DETACH                          40
#define TK_EACH                            41
#define TK_FAIL                            42
#define TK_OR                              43
#define TK_AND                             44
#define TK_IS                              45
#define TK_ISNOT                           46
#define TK_MATCH                           47
#define TK_LIKE_KW                         48
#define TK_BETWEEN                         49
#define TK_IN                              50
#define TK_ISNULL                          51
#define TK_NOTNULL                         52
#define TK_NE                              53
#define TK_EQ                              54
#define TK_GT                              55
#define TK_LE                              56
#define TK_LT                              57
#define TK_GE                              58
#define TK_ESCAPE                          59
#define TK_ID                              60
#define TK_COLUMNKW                        61
#define TK_DO                              62
#define TK_FOR                             63
#define TK_IGNORE                          64
#define TK_INITIALLY                       65
#define TK_INSTEAD                         66
#define TK_NO                              67
#define TK_KEY                             68
#define TK_OF                              69
#define TK_OFFSET                          70
#define TK_PRAGMA                          71
#define TK_RAISE                           72
#define TK_RECURSIVE                       73
#define TK_REPLACE                         74
#define TK_RESTRICT                        75
#define TK_ROW                             76
#define TK_ROWS                            77
#define TK_TRIGGER                         78
#define TK_VACUUM                          79
#define TK_VIEW                            80
#define TK_VIRTUAL                         81
#define TK_WITH                            82
#define TK_NULLS                           83
#define TK_FIRST                           84
#define TK_LAST                            85
#define TK_CURRENT                         86
#define TK_FOLLOWING                       87
#define TK_PARTITION                       88
#define TK_PRECEDING                       89
#define TK_RANGE                           90
#define TK_UNBOUNDED                       91
#define TK_EXCLUDE                         92
#define TK_GROUPS                          93
#define TK_OTHERS                          94
#define TK_TIES                            95
#define TK_GENERATED                       96
#define TK_ALWAYS                          97
#define TK_MATERIALIZED                    98
#define TK_REINDEX                         99
#define TK_RENAME                         100
#define TK_CTIME_KW                       101
#define TK_ANY                            102
#define TK_BITAND                         103
#define TK_BITOR                          104
#define TK_LSHIFT                         105
#define TK_RSHIFT                         106
#define TK_PLUS                           107
#define TK_MINUS                          108
#define TK_STAR                           109
#define TK_SLASH                          110
#define TK_REM                            111
#define TK_CONCAT                         112
#define TK_PTR                            113
#define TK_COLLATE                        114
#define TK_BITNOT                         115
#define TK_ON                             116
#define TK_INDEXED                        117
#define TK_STRING                         118
#define TK_JOIN_KW                        119
#define TK_CONSTRAINT                     120
#define TK_DEFAULT                        121
#define TK_NULL                           122
#define TK_PRIMARY                        123
#define TK_UNIQUE                         124
#define TK_CHECK                          125
#define TK_REFERENCES                     126
#define TK_AUTOINCR                       127
#define TK_INSERT                         128
#define TK_DELETE                         129
#define TK_UPDATE                         130
#define TK_SET                            131
#define TK_DEFERRABLE                     132
#define TK_FOREIGN                        133
#define TK_DROP                           134
#define TK_UNION                          135
#define TK_ALL                            136
#define TK_EXCEPT                         137
#define TK_INTERSECT                      138
#define TK_SELECT                         139
#define TK_VALUES                         140
#define TK_DISTINCT                       141
#define TK_DOT                            142
#define TK_FROM                           143
#define TK_JOIN                           144
#define TK_USING                          145
#define TK_ORDER                          146
#define TK_GROUP                          147
#define TK_HAVING                         148
#define TK_LIMIT                          149
#define TK_WHERE                          150
#define TK_RETURNING                      151
#define TK_INTO                           152
#define TK_NOTHING                        153
#define TK_FLOAT                          154
#define TK_BLOB                           155
#define TK_INTEGER                        156
#define TK_VARIABLE                       157
#define TK_CASE                           158
#define TK_WHEN                           159
#define TK_THEN                           160
#define TK_ELSE                           161
#define TK_INDEX                          162
#define TK_ALTER                          163
#define TK_ADD                            164
#define TK_WINDOW                         165
#define TK_OVER                           166
#define TK_FILTER                         167
#define TK_COLUMN                         168
#define TK_AGG_FUNCTION                   169
#define TK_AGG_COLUMN                     170
#define TK_TRUEFALSE                      171
#define TK_FUNCTION                       172
#define TK_UPLUS                          173
#define TK_UMINUS                         174
#define TK_TRUTH                          175
#define TK_REGISTER                       176
#define TK_VECTOR                         177
#define TK_SELECT_COLUMN                  178
#define TK_IF_NULL_ROW                    179
#define TK_ASTERISK                       180
#define TK_SPAN                           181
#define TK_ERROR                          182
#define TK_QNUMBER                        183
#define TK_SPACE                          184
#define TK_ILLEGAL                        185
