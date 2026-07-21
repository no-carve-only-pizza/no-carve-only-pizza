# Security disclosures — 2026-07 (local draft)

> 외부 계정에 올리기 전 검토용. CVE 번호는 할당되면 이 파일만 갱신하면 됨.

## One-liners (resume / GitHub About / LinkedIn)

- Discovered and reported remote IPFIX use-after-free and divide-by-zero DoS in `nfcapd` (nfdump); both accepted and published as GitHub Security Advisories (CVSS 7.5).
- Reported additional nfdump collector/file-parser issues under private advisories (triage) and memory-safety bugs in softflowd / tcpflow.

## Published (credit live)

| ID | Product | Class | Link |
|----|---------|-------|------|
| GHSA-35rg-4vr7-fmr2 | nfdump/nfcapd | Remote UAF (CWE-416), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-35rg-4vr7-fmr2 |
| GHSA-9q9x-c3p9-pp6r | nfdump/nfcapd | Remote SIGFPE / div-by-zero (CWE-369), CVSS 7.5 | https://github.com/phaag/nfdump/security/advisories/GHSA-9q9x-c3p9-pp6r |

Reporter credit: `no-carve-only-pizza` (accepted). CVE IDs: pending.

## Public issues

| Project | Issue | Class |
|---------|-------|-------|
| softflowd | https://github.com/irino/softflowd/issues/67 | MPLS label-depth OOB read + flow-table corruption (CWE-125) |
| tcpflow | https://github.com/simsong/tcpflow/issues/277 | Crafted-pcap OOB reads (CWE-125), low/DoS |

## Private advisories (triage — do not blog details)

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
