namespace RPManagerCharacterCreation {
    partial class Form1 {
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing) {
            if (disposing && (components != null)) {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent() {
            this.zapiszButton = new System.Windows.Forms.Button();
            this.imieLabel = new System.Windows.Forms.Label();
            this.imieTextBox = new System.Windows.Forms.TextBox();
            this.testLabel = new System.Windows.Forms.Label();
            this.rasaLabel = new System.Windows.Forms.Label();
            this.rasaTextBox = new System.Windows.Forms.TextBox();
            this.obecnaProfesjaLabel = new System.Windows.Forms.Label();
            this.obecnaProfesjaTextBox = new System.Windows.Forms.TextBox();
            this.poprzedniaProfesjaLabel = new System.Windows.Forms.Label();
            this.poprzedniaProfesjaTextBox = new System.Windows.Forms.TextBox();
            this.opisPostaciLabel = new System.Windows.Forms.Label();
            this.wyborNPCComboBox = new System.Windows.Forms.ComboBox();
            this.dodajNPCButton = new System.Windows.Forms.Button();
            this.usunNPCButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // zapiszButton
            // 
            this.zapiszButton.Location = new System.Drawing.Point(560, 117);
            this.zapiszButton.Name = "zapiszButton";
            this.zapiszButton.Size = new System.Drawing.Size(221, 23);
            this.zapiszButton.TabIndex = 0;
            this.zapiszButton.Text = "Zapisz obecnego NPC";
            this.zapiszButton.UseVisualStyleBackColor = true;
            this.zapiszButton.Click += new System.EventHandler(this.zapiszButton_Click);
            // 
            // imieLabel
            // 
            this.imieLabel.AutoSize = true;
            this.imieLabel.Location = new System.Drawing.Point(13, 21);
            this.imieLabel.Name = "imieLabel";
            this.imieLabel.Size = new System.Drawing.Size(66, 13);
            this.imieLabel.TabIndex = 1;
            this.imieLabel.Text = "Imię postaci:";
            // 
            // imieTextBox
            // 
            this.imieTextBox.Location = new System.Drawing.Point(16, 38);
            this.imieTextBox.Name = "imieTextBox";
            this.imieTextBox.Size = new System.Drawing.Size(225, 20);
            this.imieTextBox.TabIndex = 2;
            // 
            // testLabel
            // 
            this.testLabel.AutoSize = true;
            this.testLabel.Location = new System.Drawing.Point(710, 572);
            this.testLabel.Name = "testLabel";
            this.testLabel.Size = new System.Drawing.Size(71, 13);
            this.testLabel.TabIndex = 3;
            this.testLabel.Text = "napis testowy";
            // 
            // rasaLabel
            // 
            this.rasaLabel.AutoSize = true;
            this.rasaLabel.Location = new System.Drawing.Point(13, 61);
            this.rasaLabel.Name = "rasaLabel";
            this.rasaLabel.Size = new System.Drawing.Size(35, 13);
            this.rasaLabel.TabIndex = 4;
            this.rasaLabel.Text = "Rasa:";
            // 
            // rasaTextBox
            // 
            this.rasaTextBox.Location = new System.Drawing.Point(16, 78);
            this.rasaTextBox.Name = "rasaTextBox";
            this.rasaTextBox.Size = new System.Drawing.Size(114, 20);
            this.rasaTextBox.TabIndex = 5;
            // 
            // obecnaProfesjaLabel
            // 
            this.obecnaProfesjaLabel.AutoSize = true;
            this.obecnaProfesjaLabel.Location = new System.Drawing.Point(13, 101);
            this.obecnaProfesjaLabel.Name = "obecnaProfesjaLabel";
            this.obecnaProfesjaLabel.Size = new System.Drawing.Size(88, 13);
            this.obecnaProfesjaLabel.TabIndex = 6;
            this.obecnaProfesjaLabel.Text = "Obecna profesja:";
            // 
            // obecnaProfesjaTextBox
            // 
            this.obecnaProfesjaTextBox.Location = new System.Drawing.Point(16, 117);
            this.obecnaProfesjaTextBox.Name = "obecnaProfesjaTextBox";
            this.obecnaProfesjaTextBox.Size = new System.Drawing.Size(114, 20);
            this.obecnaProfesjaTextBox.TabIndex = 7;
            // 
            // poprzedniaProfesjaLabel
            // 
            this.poprzedniaProfesjaLabel.AutoSize = true;
            this.poprzedniaProfesjaLabel.Location = new System.Drawing.Point(13, 140);
            this.poprzedniaProfesjaLabel.Name = "poprzedniaProfesjaLabel";
            this.poprzedniaProfesjaLabel.Size = new System.Drawing.Size(103, 13);
            this.poprzedniaProfesjaLabel.TabIndex = 8;
            this.poprzedniaProfesjaLabel.Text = "Poprzednia profesja:";
            // 
            // poprzedniaProfesjaTextBox
            // 
            this.poprzedniaProfesjaTextBox.Location = new System.Drawing.Point(16, 156);
            this.poprzedniaProfesjaTextBox.Name = "poprzedniaProfesjaTextBox";
            this.poprzedniaProfesjaTextBox.Size = new System.Drawing.Size(114, 20);
            this.poprzedniaProfesjaTextBox.TabIndex = 9;
            // 
            // opisPostaciLabel
            // 
            this.opisPostaciLabel.AutoSize = true;
            this.opisPostaciLabel.Location = new System.Drawing.Point(590, 353);
            this.opisPostaciLabel.Name = "opisPostaciLabel";
            this.opisPostaciLabel.Size = new System.Drawing.Size(63, 13);
            this.opisPostaciLabel.TabIndex = 10;
            this.opisPostaciLabel.Text = "opis postaci";
            // 
            // wyborNPCComboBox
            // 
            this.wyborNPCComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.wyborNPCComboBox.FormattingEnabled = true;
            this.wyborNPCComboBox.Location = new System.Drawing.Point(560, 146);
            this.wyborNPCComboBox.Name = "wyborNPCComboBox";
            this.wyborNPCComboBox.Size = new System.Drawing.Size(171, 21);
            this.wyborNPCComboBox.TabIndex = 11;
            this.wyborNPCComboBox.SelectedIndexChanged += new System.EventHandler(this.wyborNPCComboBox_SelectedIndexChanged);
            // 
            // dodajNPCButton
            // 
            this.dodajNPCButton.Location = new System.Drawing.Point(560, 35);
            this.dodajNPCButton.Name = "dodajNPCButton";
            this.dodajNPCButton.Size = new System.Drawing.Size(221, 23);
            this.dodajNPCButton.TabIndex = 12;
            this.dodajNPCButton.Text = "Dodaj nowego NPC (pusty)";
            this.dodajNPCButton.UseVisualStyleBackColor = true;
            this.dodajNPCButton.Click += new System.EventHandler(this.dodajNPCButton_Click);
            // 
            // usunNPCButton
            // 
            this.usunNPCButton.Location = new System.Drawing.Point(560, 588);
            this.usunNPCButton.Name = "usunNPCButton";
            this.usunNPCButton.Size = new System.Drawing.Size(221, 23);
            this.usunNPCButton.TabIndex = 13;
            this.usunNPCButton.Text = "Usuń obecnego NPC (bez potwierdzenia)";
            this.usunNPCButton.UseVisualStyleBackColor = true;
            this.usunNPCButton.Click += new System.EventHandler(this.usunNPCButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(793, 623);
            this.Controls.Add(this.usunNPCButton);
            this.Controls.Add(this.dodajNPCButton);
            this.Controls.Add(this.wyborNPCComboBox);
            this.Controls.Add(this.opisPostaciLabel);
            this.Controls.Add(this.poprzedniaProfesjaTextBox);
            this.Controls.Add(this.poprzedniaProfesjaLabel);
            this.Controls.Add(this.obecnaProfesjaTextBox);
            this.Controls.Add(this.obecnaProfesjaLabel);
            this.Controls.Add(this.rasaTextBox);
            this.Controls.Add(this.rasaLabel);
            this.Controls.Add(this.testLabel);
            this.Controls.Add(this.imieTextBox);
            this.Controls.Add(this.imieLabel);
            this.Controls.Add(this.zapiszButton);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button zapiszButton;
        private System.Windows.Forms.Label imieLabel;
        private System.Windows.Forms.TextBox imieTextBox;
        private System.Windows.Forms.Label testLabel;
        private System.Windows.Forms.Label rasaLabel;
        private System.Windows.Forms.TextBox rasaTextBox;
        private System.Windows.Forms.Label obecnaProfesjaLabel;
        private System.Windows.Forms.TextBox obecnaProfesjaTextBox;
        private System.Windows.Forms.Label poprzedniaProfesjaLabel;
        private System.Windows.Forms.TextBox poprzedniaProfesjaTextBox;
        private System.Windows.Forms.Label opisPostaciLabel;
        private System.Windows.Forms.ComboBox wyborNPCComboBox;
        private System.Windows.Forms.Button dodajNPCButton;
        private System.Windows.Forms.Button usunNPCButton;
    }
}

