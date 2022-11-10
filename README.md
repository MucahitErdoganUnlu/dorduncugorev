# Gorev-4

4\. görev `pointer` ve `struct` kullanımıyla ilgili.

**Country** ve **Province** isimli iki yapımız var. Her iki `struct` iki elemana sahip:
1. *name*
2. **Country** için *capital*, **Province** için *domain*

Yani ülke yapısında isim ve başkent bilgileri, şehir yapısında isim ve bulunduğu ülke bilgileri tutuluyor.
Her iki yapının ikinci elemanı `pointer` olmalı.

**Hedef:** Bu görevde İstanbul'un bulunduğu ülkenin başkentinin isminin ekrana yazdırılması bekleniyor.

### İşe Yararayabilecek Şeyler

  `pointer` ve `referance` arasındaki fark için [siteye](https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in#answer-57780) göz gezdirebilirsiniz.

pointer(\*) - reference(&) kullanımı ile ilgili örnek kod:

```
#include <iostream>
void myscanf(int* num) {
	std::cin >> *num;
}
void myscanf2(int& num) {
	std::cin >> num;
}
int main() {
	int a, x, *b;
	b = &a;
	int* c = &a;
	myscanf(&a);
	myscanf2(x);
	printf("a=%d b=%d c=%d x=%d\n", a, *b, *c, x);
}
  ```
 ### Dikkat Edilmesi Gerekenler
  
* 4\. görevde her iki yapının ikinci elemanı için `pointer` ya **Country** veya **Province** `pointer` olmalı. `string*` falan yapıp `pointer` kullanmış olmak için kullanmayın
  
* cin gerekmiyor direkt **Province** İstanbul'dan başlatabilirsiniz
  
* *capital*'in  türünü `province*` yapabilmek için **Country**'den önce tanımlamış olmanız gerekiyor. (Fonkisyonlara benzer şekilde [tanımlayabilirsininiz](http://www.cplusplus.com/doc/tutorial/functions/#declarations). 
