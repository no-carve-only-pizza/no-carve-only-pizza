# Security disclosures

[← Profile](./README.md)

**10 CVE-assigned vulnerabilities:** nine in nfdump and one in justniffer.
Each CVE link below opens the public maintainer advisory that lists the CVE ID and
credits [Dohyun Park (@no-carve-only-pizza)](https://github.com/no-carve-only-pizza) as reporter.

## CVE assignments

| CVE | Project | Finding | CVSS 3.1 |
|---|---|---|---|
| [CVE-2026-102528](https://github.com/onotelli/justniffer/security/advisories/GHSA-3gvq-jf6c-94v8) | justniffer | IP fragment heap over-read | 8.2 |
| [CVE-2026-94551](https://github.com/phaag/nfdump/security/advisories/GHSA-35rg-4vr7-fmr2) | nfdump / nfcapd | IPFIX template replacement use-after-free | 7.5 |
| [CVE-2026-94552](https://github.com/phaag/nfdump/security/advisories/GHSA-9q9x-c3p9-pp6r) | nfdump / nfcapd | Options Template length overflow / SIGFPE | 7.5 |
| [CVE-2026-94553](https://github.com/phaag/nfdump/security/advisories/GHSA-h97c-j4xh-mrwh) | nfdump / nfcapd | IPFIX withdraw-all use-after-free | 7.5 |
| [CVE-2026-94554](https://github.com/phaag/nfdump/security/advisories/GHSA-4x68-h7hg-9gh4) | nfdump / nfcapd | Zero-size subTemplateMultiList CPU exhaustion | 7.5 |
| [CVE-2026-94555](https://github.com/phaag/nfdump/security/advisories/GHSA-7rq7-vj35-pw96) | nfdump / nfcapd | Zero-length template CPU / disk exhaustion | 7.5 |
| [CVE-2026-94556](https://github.com/phaag/nfdump/security/advisories/GHSA-5c4g-q9hx-6x4m) | nfdump | NBAR array out-of-bounds reads | 5.5 |
| [CVE-2026-94557](https://github.com/phaag/nfdump/security/advisories/GHSA-qrg4-hf97-rg7g) | nfdump | Interface / VRF array heap out-of-bounds read | 5.5 |
| [CVE-2026-94558](https://github.com/phaag/nfdump/security/advisories/GHSA-jfw9-v5p4-pxw2) | nfdump | Legacy v1 file-header stack out-of-bounds read | 5.5 |
| [CVE-2026-94559](https://github.com/phaag/nfdump/security/advisories/GHSA-7vhp-748h-jjx6) | nfdump | Malformed appendix loop / log-flood denial of service | 5.5 |

The nfcapd findings demonstrate remote denial of service; the file-parser findings
require a crafted file to be opened. Memory-safety classifications do not imply
that code execution was demonstrated. Scores above are those published by the maintainers.

justniffer was fixed in [v0.6.14](https://github.com/onotelli/justniffer/releases/tag/v0.6.14).
The nfdump advisories link the relevant fixes and version boundaries; see the
[upstream releases](https://github.com/phaag/nfdump/releases) for released versions.

## Additional public reports

These reports are separate from the ten CVE assignments above.

| Project | Report | Status |
|---|---|---|
| softflowd | [MPLS label-depth out-of-bounds read and flow-table corruption (#67)](https://github.com/irino/softflowd/issues/67) | Fixed upstream in [74c311f](https://github.com/irino/softflowd/commit/74c311f); issue closed |
| tcpflow | [Crafted-pcap out-of-bounds reads (#277)](https://github.com/simsong/tcpflow/issues/277) | Open |

## Evidence

The screenshots below are the original reproduction and disclosure records.
Their captured advisory metadata may predate the CVE assignments; the linked
maintainer advisories above contain the current IDs.

<details>
<summary>nfdump and justniffer reproduction evidence</summary>

### File-parser advisories
#### GHSA-5c4g-q9hx-6x4m — NBAR array OOB

![Published advisory](disclosures/screenshots/ghsa-5c4g-nbar/00-ghsa-published.png)

#### GHSA-qrg4-hf97-rg7g — ifvrf heap OOB

![Published advisory](disclosures/screenshots/ghsa-qrg4-ifvrf/00-ghsa-published.png)

#### GHSA-jfw9-v5p4-pxw2 — legacy v1 ident stack OOB

![Published advisory](disclosures/screenshots/ghsa-jfw9-v1ident/00-ghsa-published.png)

#### GHSA-7vhp-748h-jjx6 — appendix log-flood DoS

![Published advisory](disclosures/screenshots/ghsa-7vhp-appendix/00-ghsa-published.png)

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

</details>

<details>
<summary>softflowd report and patch verification</summary>

Fixed upstream in commit [`74c311f`](https://github.com/irino/softflowd/commit/74c311f); maintainer closed the issue as completed on 2026-07-26. A duplicate report, [#66](https://github.com/irino/softflowd/issues/66), was closed as a duplicate of this issue the same day.

![GitHub issue](disclosures/screenshots/softflowd-67/00-github-issue.png)

![ASAN OOB live](disclosures/screenshots/softflowd-67/01-asan-oob-live.png)

![Patched survives](disclosures/screenshots/softflowd-67/02-patched-survives.png)

![Root cause and fix](disclosures/screenshots/softflowd-67/03-root-cause-and-fix.png)

![Duplicate check](disclosures/screenshots/softflowd-67/04-duplicate-check.png)

</details>

<details>
<summary>tcpflow report and reproduction evidence</summary>

![GitHub issue](disclosures/screenshots/tcpflow-277/00-github-issue.png)

![print_packet ASAN](disclosures/screenshots/tcpflow-277/01-print-packet-asan-live.png)

![process_tcp ASAN](disclosures/screenshots/tcpflow-277/02-process-tcp-asan-live.png)

![Patched survives](disclosures/screenshots/tcpflow-277/03-patched-survives.png)

![Root cause and fix](disclosures/screenshots/tcpflow-277/04-root-cause-and-fix.png)

![site3 already guarded](disclosures/screenshots/tcpflow-277/05-site3-already-guarded.png)

![Duplicate check](disclosures/screenshots/tcpflow-277/06-duplicate-check.png)

</details>

_Public advisory IDs, reporter credit, scores, and issue states checked on 2026-10-23._
