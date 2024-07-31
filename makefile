push:
	@msg=$${msg:-"solutions added"}; \
	git add . && git commit -m "$$msg" && git push origin main

.PHONY: push