# P13 - Wireless Sensor Network Health Monitor

Kablosuz sensör düğümlerinden gelen pil, sinyal ve paket verilerini CSV dosyasından okuyup her düğümün durumunu ve her turda ağın sağlıklı olup olmadığını raporlayan bir komut satırı programı. Grup 13'ün dönem projesi.

## Derleme ve çalıştırma

```bash
make
./wsn_monitor input.csv output.txt
```

Örnek dosyayla denemek için:

```bash
./wsn_monitor sample_input.csv output.txt
```

Hatalı bir kayıt bulunursa program `ERROR: invalid record at line N` yazar ve sıfırdan farklı bir kodla çıkar. Bu durumda rapor dosyası oluşturulmaz.

## Dosyalar

| Dosya | İçerik |
|-------|--------|
| `common.h` | Ortak sabitler ve `SensorRecord` yapısı |
| `input.c / input.h` | Modül 1: CSV okuma ve doğrulama |
| `analysis.c / analysis.h` | Modül 2: Pil % ve paket kaybı hesapları |
| `control.c / control.h` | Modül 3: Düğüm durumu ve tur sonuçları |
| `report.c / report.h` | Modül 4: Çıktı dosyası ve özet |
| `main.c` | Modülleri sırayla çağırır |
| `Makefile` | `wsn_monitor` programını derler |
| `sample_input.csv` | Hocanın verdiği örnek giriş (değiştirilmedi) |

## Giriş formatı

İlk satır başlıktır, sonraki her satır bir ölçümdür:

```
round,node,battery_V,rssi_dBm,sent,received
1,N1,4.10,-62,100,98
```

## Ekip

| Kişi | Rol (Modül 1) |
|------|---------------|
| Ayşe | Module Leader |
| Şule | Developer |
| Aynur | Test Lead |
| Ece | Integration Lead |

Roller her modülde değişiyor.

## Durum

- [x] Ortak yapı (`common.h`), `main.c` ve `Makefile`
- [ ] Modül 1 - Input
- [ ] Modül 2 - Analysis
- [ ] Modül 3 - Control
- [ ] Modül 4 - Report
