#ifndef HTML_H
#define HTML_H

#define INDEX_HTML "<html>\
					<head>\
						<title>Test de POST</title>\
						<style>\
							body { background-color: #cccccc;}\
						</style>\
					</head>\
					<body>\
						<h1>Matriz de LEDs!!</h1>\
						<form action='/chars' method='post'>\
							<fieldset>\
								<legend>Caracteres</legend>\
								Caracteres:<br>\
								<input type='text' name='chars' maxlength='4'><br>\
								<input type='submit' value='Submit'>\
							</fieldset>\
						</form>\
						<div class='card-header'>Elija los LEDs a prender</div>\
						<div class='card-body'>\
							<form action='/matrix' method='post'>\
								<div class='justify-content-center'>\
									<div class='matrix text-center'>\
										<input type='checkbox' value=1 name='0-0'><input type='checkbox' value=1 name='0-1'><input type='checkbox' value=1 name='0-2'><input type='checkbox' value=1 name='0-3'><input type='checkbox' value=1 name='0-4'><input type='checkbox' value=1 name='0-5'><input type='checkbox' value=1 name='0-6'><input type='checkbox' value=1 name='0-7'><input type='checkbox' value=1 name='0-8'><input type='checkbox' value=1 name='0-9'><input type='checkbox' value=1 name='0-10'><input type='checkbox' value=1 name='0-11'><input type='checkbox' value=1 name='0-12'><input type='checkbox' value=1 name='0-13'><input type='checkbox' value=1 name='0-14'><input type='checkbox' value=1 name='0-15'><input type='checkbox' value=1 name='0-16'><input type='checkbox' value=1 name='0-17'><input type='checkbox' value=1 name='0-18'><input type='checkbox' value=1 name='0-19'><input type='checkbox' value=1 name='0-20'><input type='checkbox' value=1 name='0-21'><input type='checkbox' value=1 name='0-22'><input type='checkbox' value=1 name='0-23'><br>\
										<input type='checkbox' value=1 name='1-0'><input type='checkbox' value=1 name='1-1'><input type='checkbox' value=1 name='1-2'><input type='checkbox' value=1 name='1-3'><input type='checkbox' value=1 name='1-4'><input type='checkbox' value=1 name='1-5'><input type='checkbox' value=1 name='1-6'><input type='checkbox' value=1 name='1-7'><input type='checkbox' value=1 name='1-8'><input type='checkbox' value=1 name='1-9'><input type='checkbox' value=1 name='1-10'><input type='checkbox' value=1 name='1-11'><input type='checkbox' value=1 name='1-12'><input type='checkbox' value=1 name='1-13'><input type='checkbox' value=1 name='1-14'><input type='checkbox' value=1 name='1-15'><input type='checkbox' value=1 name='1-16'><input type='checkbox' value=1 name='1-17'><input type='checkbox' value=1 name='1-18'><input type='checkbox' value=1 name='1-19'><input type='checkbox' value=1 name='1-20'><input type='checkbox' value=1 name='1-21'><input type='checkbox' value=1 name='1-22'><input type='checkbox' value=1 name='1-23'><br>\
										<input type='checkbox' value=1 name='2-0'><input type='checkbox' value=1 name='2-1'><input type='checkbox' value=1 name='2-2'><input type='checkbox' value=1 name='2-3'><input type='checkbox' value=1 name='2-4'><input type='checkbox' value=1 name='2-5'><input type='checkbox' value=1 name='2-6'><input type='checkbox' value=1 name='2-7'><input type='checkbox' value=1 name='2-8'><input type='checkbox' value=1 name='2-9'><input type='checkbox' value=1 name='2-10'><input type='checkbox' value=1 name='2-11'><input type='checkbox' value=1 name='2-12'><input type='checkbox' value=1 name='2-13'><input type='checkbox' value=1 name='2-14'><input type='checkbox' value=1 name='2-15'><input type='checkbox' value=1 name='2-16'><input type='checkbox' value=1 name='2-17'><input type='checkbox' value=1 name='2-18'><input type='checkbox' value=1 name='2-19'><input type='checkbox' value=1 name='2-20'><input type='checkbox' value=1 name='2-21'><input type='checkbox' value=1 name='2-22'><input type='checkbox' value=1 name='2-23'><br>\
										<input type='checkbox' value=1 name='3-0'><input type='checkbox' value=1 name='3-1'><input type='checkbox' value=1 name='3-2'><input type='checkbox' value=1 name='3-3'><input type='checkbox' value=1 name='3-4'><input type='checkbox' value=1 name='3-5'><input type='checkbox' value=1 name='3-6'><input type='checkbox' value=1 name='3-7'><input type='checkbox' value=1 name='3-8'><input type='checkbox' value=1 name='3-9'><input type='checkbox' value=1 name='3-10'><input type='checkbox' value=1 name='3-11'><input type='checkbox' value=1 name='3-12'><input type='checkbox' value=1 name='3-13'><input type='checkbox' value=1 name='3-14'><input type='checkbox' value=1 name='3-15'><input type='checkbox' value=1 name='3-16'><input type='checkbox' value=1 name='3-17'><input type='checkbox' value=1 name='3-18'><input type='checkbox' value=1 name='3-19'><input type='checkbox' value=1 name='3-20'><input type='checkbox' value=1 name='3-21'><input type='checkbox' value=1 name='3-22'><input type='checkbox' value=1 name='3-23'><br>\
										<input type='checkbox' value=1 name='4-0'><input type='checkbox' value=1 name='4-1'><input type='checkbox' value=1 name='4-2'><input type='checkbox' value=1 name='4-3'><input type='checkbox' value=1 name='4-4'><input type='checkbox' value=1 name='4-5'><input type='checkbox' value=1 name='4-6'><input type='checkbox' value=1 name='4-7'><input type='checkbox' value=1 name='4-8'><input type='checkbox' value=1 name='4-9'><input type='checkbox' value=1 name='4-10'><input type='checkbox' value=1 name='4-11'><input type='checkbox' value=1 name='4-12'><input type='checkbox' value=1 name='4-13'><input type='checkbox' value=1 name='4-14'><input type='checkbox' value=1 name='4-15'><input type='checkbox' value=1 name='4-16'><input type='checkbox' value=1 name='4-17'><input type='checkbox' value=1 name='4-18'><input type='checkbox' value=1 name='4-19'><input type='checkbox' value=1 name='4-20'><input type='checkbox' value=1 name='4-21'><input type='checkbox' value=1 name='4-22'><input type='checkbox' value=1 name='4-23'><br>\
										<input type='checkbox' value=1 name='5-0'><input type='checkbox' value=1 name='5-1'><input type='checkbox' value=1 name='5-2'><input type='checkbox' value=1 name='5-3'><input type='checkbox' value=1 name='5-4'><input type='checkbox' value=1 name='5-5'><input type='checkbox' value=1 name='5-6'><input type='checkbox' value=1 name='5-7'><input type='checkbox' value=1 name='5-8'><input type='checkbox' value=1 name='5-9'><input type='checkbox' value=1 name='5-10'><input type='checkbox' value=1 name='5-11'><input type='checkbox' value=1 name='5-12'><input type='checkbox' value=1 name='5-13'><input type='checkbox' value=1 name='5-14'><input type='checkbox' value=1 name='5-15'><input type='checkbox' value=1 name='5-16'><input type='checkbox' value=1 name='5-17'><input type='checkbox' value=1 name='5-18'><input type='checkbox' value=1 name='5-19'><input type='checkbox' value=1 name='5-20'><input type='checkbox' value=1 name='5-21'><input type='checkbox' value=1 name='5-22'><input type='checkbox' value=1 name='5-23'><br>\
										<input type='checkbox' value=1 name='6-0'><input type='checkbox' value=1 name='6-1'><input type='checkbox' value=1 name='6-2'><input type='checkbox' value=1 name='6-3'><input type='checkbox' value=1 name='6-4'><input type='checkbox' value=1 name='6-5'><input type='checkbox' value=1 name='6-6'><input type='checkbox' value=1 name='6-7'><input type='checkbox' value=1 name='6-8'><input type='checkbox' value=1 name='6-9'><input type='checkbox' value=1 name='6-10'><input type='checkbox' value=1 name='6-11'><input type='checkbox' value=1 name='6-12'><input type='checkbox' value=1 name='6-13'><input type='checkbox' value=1 name='6-14'><input type='checkbox' value=1 name='6-15'><input type='checkbox' value=1 name='6-16'><input type='checkbox' value=1 name='6-17'><input type='checkbox' value=1 name='6-18'><input type='checkbox' value=1 name='6-19'><input type='checkbox' value=1 name='6-20'><input type='checkbox' value=1 name='6-21'><input type='checkbox' value=1 name='6-22'><input type='checkbox' value=1 name='6-23'><br>\
										<input type='checkbox' value=1 name='7-0'><input type='checkbox' value=1 name='7-1'><input type='checkbox' value=1 name='7-2'><input type='checkbox' value=1 name='7-3'><input type='checkbox' value=1 name='7-4'><input type='checkbox' value=1 name='7-5'><input type='checkbox' value=1 name='7-6'><input type='checkbox' value=1 name='7-7'><input type='checkbox' value=1 name='7-8'><input type='checkbox' value=1 name='7-9'><input type='checkbox' value=1 name='7-10'><input type='checkbox' value=1 name='7-11'><input type='checkbox' value=1 name='7-12'><input type='checkbox' value=1 name='7-13'><input type='checkbox' value=1 name='7-14'><input type='checkbox' value=1 name='7-15'><input type='checkbox' value=1 name='7-16'><input type='checkbox' value=1 name='7-17'><input type='checkbox' value=1 name='7-18'><input type='checkbox' value=1 name='7-19'><input type='checkbox' value=1 name='7-20'><input type='checkbox' value=1 name='7-21'><input type='checkbox' value=1 name='7-22'><input type='checkbox' value=1 name='7-23'><br>\
									</div>\
								</div>\
								<div class='col-12 d-flex justify-content-center p-3'>\
									<button type='submit'>Enviar</button>\
								</div>\
							</form>\
						</div>\
					</body>\
					</html>"

#endif