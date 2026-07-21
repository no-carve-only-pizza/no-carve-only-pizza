# Security disclosures — 2026-07

Public portfolio record. CVE IDs are added when assigned. Evidence screenshots live under [`disclosures/screenshots/`](./disclosures/screenshots/).

## One-liners

- Discovered and reported remote IPFIX use-after-free and divide-by-zero DoS in `nfcapd` (nfdump); both accepted and published as GitHub Security Advisories (CVSS 7.5).
- Reported additional nfdump collector/file-parser issues under private advisories (triage) and memory-safety bugs in softflowd / tcpflow.

## Published (credit live)

| ID | Product | Class | Link |
|----|---------|-------|------|
| GHSA-35rg-4vr7-fmr2 | nfdump/nfcapd | Remote UAF (CWE-416), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-35rg-4vr7-fmr2 |
| GHSA-9q9x-c3p9-pp6r | nfdump/nfcapd | Remote SIGFPE / div-by-zero (CWE-369), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-9q9x-c3p9-pp6r |

Reporter credit: `no-carve-only-pizza` (accepted). CVE IDs: pending.

### GHSA-35rg-4vr7-fmr2 — Options Template sequencer UAF

![Published advisory](disclosures/screenshots/ghsa-35rg-uaf/00-ghsa-published.png)

![ASAN UAF live](disclosures/screenshots/ghsa-35rg-uaf/01-asan-uaf-live-reproduction.png)

![Native SIGSEGV](disclosures/screenshots/ghsa-35rg-uaf/02-native-sigsegv-live-reproduction.png)

![PoC packets](disclosures/screenshots/ghsa-35rg-uaf/03-poc-packets-and-hashes.png)

![Version / fix matrix](disclosures/screenshots/ghsa-35rg-uaf/04-version-repeatability-fix-matrix.png)

![Duplicate check](disclosures/screenshots/ghsa-35rg-uaf/05-public-duplicate-check.png)

![Root cause and fix](disclosures/screenshots/ghsa-35rg-uaf/06-root-cause-and-fix.png)

### GHSA-9q9x-c3p9-pp6r — Options Template length wrap / SIGFPE

![Published advisory](disclosures/screenshots/ghsa-9q9x-sigfpe/00-ghsa-published.png)

![ASAN SIGFPE live](disclosures/screenshots/ghsa-9q9x-sigfpe/01-asan-sigfpe-live.png)

![Patched survives](disclosures/screenshots/ghsa-9q9x-sigfpe/02-patched-survives.png)

![Root cause and fix](disclosures/screenshots/ghsa-9q9x-sigfpe/03-root-cause-and-fix.png)

![Duplicate check](disclosures/screenshots/ghsa-9q9x-sigfpe/04-duplicate-check.png)

## Public issues

| Project | Issue | Class |
|---------|-------|-------|
| softflowd | https://github.com/irino/softflowd/issues/67 | MPLS label-depth OOB read + flow-table corruption (CWE-125) |
| tcpflow | https://github.com/simsong/tcpflow/issues/277 | Crafted-pcap OOB reads (CWE-125), low/DoS |

### softflowd#67

![GitHub issue](disclosures/screenshots/softflowd-67/00-github-issue.png)

![ASAN OOB live](disclosures/screenshots/softflowd-67/01-asan-oob-live.png)

![Patched survives](disclosures/screenshots/softflowd-67/02-patched-survives.png)

![Root cause and fix](disclosures/screenshots/softflowd-67/03-root-cause-and-fix.png)

![Duplicate check](disclosures/screenshots/softflowd-67/04-duplicate-check.png)

### tcpflow#277

![GitHub issue](disclosures/screenshots/tcpflow-277/00-github-issue.png)

![print_packet ASAN](disclosures/screenshots/tcpflow-277/01-print-packet-asan-live.png)

![process_tcp ASAN](disclosures/screenshots/tcpflow-277/02-process-tcp-asan-live.png)

![Patched survives](disclosures/screenshots/tcpflow-277/03-patched-survives.png)

![Root cause and fix](disclosures/screenshots/tcpflow-277/04-root-cause-and-fix.png)

![site3 already guarded](disclosures/screenshots/tcpflow-277/05-site3-already-guarded.png)

![Duplicate check](disclosures/screenshots/tcpflow-277/06-duplicate-check.png)

## Private advisories (triage — titles only, no evidence published here)

| GHSA | Summary (public title only) |
|------|-------------------------------|
| GHSA-h97c-j4xh-mrwh | IPFIX withdraw-all remote UAF |
| GHSA-7rq7-vj35-pw96 | IPFIX zero-length template CPU/disk exhaustion |
| GHSA-4x68-h7hg-9gh4 | IPFIX subTemplateMultiList zero-size CPU exhaustion |
| GHSA-qrg4-hf97-rg7g | ifvrf array heap OOB read (`nfdump -r`) |
| GHSA-5c4g-q9hx-6x4m | NBAR array OOB reads (`nfdump -r`) |
| GHSA-jfw9-v5p4-pxw2 | Legacy v1 ident stack OOB read |
| GHSA-7vhp-748h-jjx6 | Appendix NumRecords log-flood DoS |

## Copy-paste blurb (KR)

nfdump `nfcapd`에서 원격·무인증 IPFIX 파서 취약점 2건(UAF, 정수 나눗셈/DoS)을 발견·제보했고 GitHub Security Advisory로 공개·패치됐다 (각 CVSS 7.5). softflowd·tcpflow의 OOB read도 공개 이슈로 제보했다.

## Next updates

- [ ] CVE IDs land → add to table and one-liners
- [ ] Patched release tags → note versions
- [ ] softflowd/tcpflow maintainer response → status line
