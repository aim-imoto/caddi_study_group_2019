// Plain Old Data 今は規格から削除されている(C++17から), 制約が強すぎる
// C++11ではPODは重要視されていた、外すのはあり得なかった
// -> standard-layout classが定義された
// 代替機能が搭載されて、2,3回の更新で外される
// byte列単位で安全にコピーしたいためにPODが定義された
// memcopyは早い

struct S
{
    S( int x = 0, int y = 0);  // PODではできない
    int x;
    int y;
};

int main()
{
    S s{1, 2};
}
