#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    // Encontrar el primer elemento de la matriz A.
    int a1 = 1;
    for (int i = 0; i < n; i++) {
      if (b[i] > 0) {
        a1 = i + 1;
        break;
      }
    }

    // Construir el resto de la matriz A.
    vector<int> a(n);
    a[0] = a1;
    int j = 1;
    for (int i = 1; i < n; i++) {
      if (b[i] > 0) {
        for (int k = 0; k < b[i]; k++) {
          a[j++] = a1 + i;
        }
      }
    }

    // Verificar si la matriz A es válida.
    bool valid = true;
    for (int i = 0; i < n; i++) {
      if (a[i] < 1 || a[i] > 10) {
        valid = false;
        break;
      }
    }

    // Imprimir la matriz A o -1 si no es válida.
    if (valid) {
      for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
      cout << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}