document.getElementById("btn-phrase").onclick = function () {
	document.getElementById('info-matrix').style.maxHeight = null;
	document.getElementById('info-predef').style.maxHeight = null;
	var panel = document.getElementById('info-phrase')
	if (panel.style.maxHeight) {
		panel.style.maxHeight = null;
	} else {
		panel.style.maxHeight = panel.scrollHeight + "px"
	}	
}
document.getElementById("btn-matrix").onclick = function () {
	document.getElementById('info-phrase').style.maxHeight = null;
	document.getElementById('info-predef').style.maxHeight = null;
	var panel = document.getElementById('info-matrix')
	if (panel.style.maxHeight) {
		panel.style.maxHeight = null;
	} else {
		panel.style.maxHeight = panel.scrollHeight + "px"
	}	
}
document.getElementById("btn-predef").onclick = function () {
	document.getElementById('info-matrix').style.maxHeight = null;
	document.getElementById('info-phrase').style.maxHeight = null;
	var panel = document.getElementById('info-predef')
	if (panel.style.maxHeight) {
		panel.style.maxHeight = null;
	} else {
		panel.style.maxHeight = panel.scrollHeight + "px"
	}
}
