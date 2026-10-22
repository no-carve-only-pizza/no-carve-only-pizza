# Dohyun Park

**Vulnerability research · Fuzzing · Reverse engineering**

AI Software student at Soongsil University and a participant in White Hat School, 4th cohort.
I research native software vulnerabilities through fuzzing, root-cause analysis,
and reproducible testing, and build tools that support that work.

[Email](mailto:dohyunpkr@gmail.com) · [LinkedIn](https://www.linkedin.com/in/%EB%8F%84%ED%98%84-%EB%B0%95-6a3035407)

## Vulnerability research

**10 CVE-assigned vulnerabilities** in nfdump and justniffer, with reporter credit
in public maintainer advisories.

| Selected CVE | Project | Finding |
|---|---|---|
| [CVE-2026-102528](https://github.com/onotelli/justniffer/security/advisories/GHSA-3gvq-jf6c-94v8) | justniffer | Heap over-read in IP fragment reassembly |
| [CVE-2026-94551](https://github.com/phaag/nfdump/security/advisories/GHSA-35rg-4vr7-fmr2) | nfdump / nfcapd | Use-after-free on IPFIX template replacement |
| [CVE-2026-94553](https://github.com/phaag/nfdump/security/advisories/GHSA-h97c-j4xh-mrwh) | nfdump / nfcapd | Use-after-free on IPFIX template withdrawal |
| [CVE-2026-94552](https://github.com/phaag/nfdump/security/advisories/GHSA-9q9x-c3p9-pp6r) | nfdump / nfcapd | Length overflow leading to division by zero |

[All 10 CVEs, public reports, and evidence →](./security-disclosures-2026-07.md)

## Selected projects

- **[Root2PoC analysis kit](https://github.com/no-carve-only-pizza/root2poc-codex-analysis-kit)** — Public tooling for native vulnerability research with IDA MCP, debugger validation, and reproducible evidence.
- **[SecondBrain](https://github.com/no-carve-only-pizza/secondbrain-oss)** — Local-first shared memory for coding agents, built around Markdown and MCP.
- **[EDR agent](https://github.com/no-carve-only-pizza/edr-agent)** — An eBPF-based Linux endpoint sensor with behavioral detection and event correlation. Team lead and system-agent developer.
- **[Paseo document viewer](https://github.com/no-carve-only-pizza/paseo-document-viewer)** — A plugin for reading local HTML and PDF files inside a Paseo workspace.

## Tools I use

C / C++ · Python · Linux / Windows · IDA · GDB / WinDbg · AFL++ · AddressSanitizer
