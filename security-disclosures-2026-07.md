# Security disclosures — 2026-07

Public portfolio record. Only **published** advisories and **public** issues. CVE IDs are added when assigned. Evidence screenshots live under [`disclosures/screenshots/`](./disclosures/screenshots/).

## One-liners

- Discovered and reported five remote IPFIX parser issues in `nfcapd` (nfdump); all accepted and published as GitHub Security Advisories (CVSS 7.5 each).
- Reported and published a justniffer / bundled-libnids IP-defrag heap over-read (GHSA, CVSS 8.2, fixed in v0.6.14).
- Also filed public memory-safety issues for softflowd / tcpflow.

## Published (credit live)

| ID | Product | Class | Link |
|----|---------|-------|------|
| GHSA-3gvq-jf6c-94v8 | justniffer | Heap over-read in undersized IP fragment handling (CWE-125), CVSS 8.2 | https://github.com/onotelli/justniffer/security/advisories/GHSA-3gvq-jf6c-94v8 |
| GHSA-35rg-4vr7-fmr2 | nfdump/nfcapd | Remote Options Template replacement UAF (CWE-416), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-35rg-4vr7-fmr2 |
| GHSA-h97c-j4xh-mrwh | nfdump/nfcapd | Remote withdraw-all UAF (CWE-416), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-h97c-j4xh-mrwh |
| GHSA-9q9x-c3p9-pp6r | nfdump/nfcapd | Remote Options Template length wrap / SIGFPE (CWE-369), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-9q9x-c3p9-pp6r |
| GHSA-4x68-h7hg-9gh4 | nfdump/nfcapd | Remote subTemplateMultiList zero-size CPU exhaustion (CWE-835), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-4x68-h7hg-9gh4 |
| GHSA-7rq7-vj35-pw96 | nfdump/nfcapd | Remote zero-length template CPU/disk exhaustion (CWE-835), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-7rq7-vj35-pw96 |

Reporter credit: `no-carve-only-pizza` (accepted). CVE IDs: pending. nfdump fixes are on master; v1.7.9 release pending. justniffer fixed in `>=0.6.14`.

### GHSA-35rg-4vr7-fmr2 — Options Template sequencer / replacement UAF

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

### justniffer — GHSA-3gvq-jf6c-94v8 / issue #19

![ASAN file mode](disclosures/screenshots/justniffer-19/01-asan-read-file-mode.png)

![ASAN live veth](disclosures/screenshots/justniffer-19/01-asan-read-live-veth.png)

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

## Copy-paste blurb (KR) — 관련 경험

관련 경험  
AFL++/ASAN 퍼징과 LLM을 함께 활용해 오픈소스 네트워크 파서에서 취약점을 찾아 제보·게재했습니다. nfdump/`nfcapd` 원격 IPFIX 이슈 5건과 justniffer IP defrag 이슈 1건이 GitHub Security Advisory로 published되었고, 최소 PoC·root cause 분석·패치 제안·responsible disclosure까지 진행해 reporter credit을 받았습니다.

취약점 1 — IPFIX Options Template replacement Use-After-Free (GHSA-35rg-4vr7-fmr2, CVSS 7.5, CWE-416)  
취약점 2 — IPFIX withdraw-all 처리 Use-After-Free (GHSA-h97c-j4xh-mrwh, CVSS 7.5, CWE-416)  
취약점 3 — IPFIX Options Template length wrap로 인한 SIGFPE (GHSA-9q9x-c3p9-pp6r, CVSS 7.5, CWE-369)  
취약점 4 — IPFIX subTemplateMultiList zero-size entry 무한 루프 / CPU 고갈 (GHSA-4x68-h7hg-9gh4, CVSS 7.5, CWE-835)  
취약점 5 — IPFIX zero-length template field 무한 루프 / CPU·디스크 고갈 (GHSA-7rq7-vj35-pw96, CVSS 7.5, CWE-835)  
취약점 6 — undersized IP fragment 처리 Heap Over-Read (GHSA-3gvq-jf6c-94v8, justniffer, CVSS 8.2, CWE-125; fixed in v0.6.14)
